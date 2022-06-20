#include <Simple-Path-Tracer/PathTracer.h>

#include <Simple-Path-Tracer/Camera.h>
#include <Simple-Path-Tracer/Ray.h>
#include <Simple-Path-Tracer/Sphere.h>
#include <Simple-Path-Tracer/config.h>

#include <iostream>
#include <vector>
#include <memory>
#include <limits>
#include <random>

#define MAX_FLOAT std::numeric_limits<float>::max()

// in utilitis
std::mt19937 gen = std::mt19937(time(0));
std::uniform_real_distribution<> randd(0.0, 1.0);

PathTraicer::PathTraicer() {}

void PathTraicer::run()
{
   std::fstream outputImg;

   outputImg.open("img.ppm", std::ios_base::out);
   if (!outputImg.is_open())
      std::cerr << "Failed to open file.\n";
   else
   {
      render(outputImg);
      std::cout << "Image was rendered successfully!\n";
   }
}

// Gets a random direction from the unit sphere
glm::vec3 PathTraicer::getRandDirection() const
{
   glm::vec3 newDirection;
   
   do
   {
      newDirection = glm::vec3(
            (randd(gen) * 2.0) - 1.0,
            (randd(gen) * 2.0) - 1.0,
            (randd(gen) * 2.0) - 1.0
      );
   } while(glm::dot(newDirection, newDirection) >= 1.0);

   return newDirection;
}

glm::vec3 PathTraicer::getColor(
      const Ray& ray,
      std::vector<std::unique_ptr<Hitable>>& world
) const {

   HitInfo hitInfo;
   glm::vec3 normal(0.0);
   glm::vec3 closestHit(MAX_FLOAT);

   bool somethingWasHitted = false;
   for (auto& object : world)
   {
      if (object->isHitted(ray, 0.0, MAX_FLOAT, hitInfo))
      {
         if (glm::distance(hitInfo.pos , ray.getOrigin()) <
             glm::distance(closestHit, ray.getOrigin())
         ) {
            closestHit = hitInfo.pos;
            normal     = hitInfo.normal;

            somethingWasHitted = true;
         }
      }
   }

   if (somethingWasHitted)
   {
      Ray newBouncingRay = Ray(closestHit, normal + getRandDirection());

      return (0.5f * getColor(newBouncingRay, world));
   }

   return glm::vec3(0.9, 0.8, 0.5);
}

void PathTraicer::render(std::fstream& img)
{
   img << "P3\n";
   img << config::RESOLUTION_W << " " << config::RESOLUTION_H << "\n";
   img << "255\n";

   std::vector<std::unique_ptr<Hitable>> world;
   world.push_back(std::make_unique<Sphere>(glm::vec3(0.0, 0.0, -1.0), 0.5));
   world.push_back(std::make_unique<Sphere>(glm::vec3(0.0, -100.5, -1.0), 100.0));
      
   Camera camera(
         glm::vec3(0.0),              // origin
         glm::vec3(-2.0, -1.0, -1.0), // lowerLeftCorner
         glm::vec3(4.0, 0.0, 0.0),    // horizontal
         glm::vec3(0.0, 2.0, 0.0)     // vertical
   );

   for (int i = config::RESOLUTION_H - 1; i >= 0; i--)
   {
      for (int j = 0; j < config::RESOLUTION_W; j++)
      {
         glm::vec3 pixelColor = glm::vec3(0.0);

         // Antialiasing
         for (int p = 0; p < config::N_SAMPLES; p++)
         {
            const float u = float(j + randd(gen)) / float(config::RESOLUTION_W);
            const float v = float(i + randd(gen)) / float(config::RESOLUTION_H);

            Ray ray = camera.getRay(u, v);
            pixelColor += getColor(ray, world);
         }

         pixelColor /= float(config::N_SAMPLES);

         const unsigned int newR = int(255.99 * pixelColor.x);
         const unsigned int newG = int(255.99 * pixelColor.y);
         const unsigned int newB = int(255.99 * pixelColor.z);

         img << newR << " " << newG << " " <<newB << "\n";
      }
   }
}

PathTraicer::~PathTraicer() = default;
