#include <Simple-Path-Tracer/PathTracer.h>

#include <Simple-Path-Tracer/config.h>
#include <Simple-Path-Tracer/util.h>
#include <Simple-Path-Tracer/Camera.h>
#include <Simple-Path-Tracer/Ray.h>
#include <Simple-Path-Tracer/Sphere.h>
#include <Simple-Path-Tracer/Material.h>
#include <Simple-Path-Tracer/Diffuse.h>
#include <Simple-Path-Tracer/Metal.h>
#include <Simple-Path-Tracer/Dielectric.h>

#include <glm/glm.hpp>

#include <iostream>
#include <vector>
#include <memory>
#include <limits>

#define MAX_FLOAT std::numeric_limits<float>::max()

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

glm::vec3 PathTraicer::gammaCorrection(const glm::vec3& pixelColor) const
{
   return glm::sqrt(pixelColor);
}

glm::vec3 PathTraicer::getColor(
      const Ray& ray,
      std::vector<std::unique_ptr<Hitable>>& world
) const {

   HitInfo hitInfo;
   Material* material;
   glm::vec3 closestHit(MAX_FLOAT);
   glm::vec3 normal(0.0);

   bool somethingWasHitted = false;
   for (auto& object : world)
   {
      if (object->isHitted(ray, 0.0, MAX_FLOAT, hitInfo))
      {
         if (glm::distance(hitInfo.pos , ray.getOrigin()) <
             glm::distance(closestHit, ray.getOrigin())
         ) {
            material     = object->getMaterial();
            closestHit   = hitInfo.pos;
            normal       = hitInfo.normal;

            somethingWasHitted = true;
         }
      }
   }

   if (somethingWasHitted)
   {
      bool isAbsorved = false;

      Ray reflectedRay = material->scatter(
            ray, closestHit, normal, isAbsorved
      );

      if (isAbsorved)
         return glm::vec3(0.0);
      else
      {
         glm::vec3 attenuation = material->getAlbedo();

         return attenuation * getColor(reflectedRay, world);
      }
   }

   // delete
   glm::vec3 uv = glm::normalize(ray.getDirection());
   const float t = 0.5 * (uv.y + 1.0);
   return (1.0f - t) * glm::vec3(1.0) + t * glm::vec3(0.5, 0.7, 1.0);
}

void PathTraicer::render(std::fstream& img)
{
   img << "P3\n";
   img << config::RESOLUTION_W << " " << config::RESOLUTION_H << "\n";
   img << "255\n";

   std::vector<std::unique_ptr<Hitable>> world;
   world.push_back(
         std::make_unique<Sphere>(
            glm::vec3(0.0, 0.0, -1.0),
            0.5,
            new Diffuse(glm::vec3(0.8, 0.3, 0.3))
         )
   );
   world.push_back(
         std::make_unique<Sphere>(
            glm::vec3(0.0, -100.5, -1.0),
            100.0,
            new Diffuse(glm::vec3(0.8, 0.8, 0.0))
         )
   );
   world.push_back(
         std::make_unique<Sphere>(
            glm::vec3(1.0, 0.0, -1.0),
            0.5,
            new Metal(glm::vec3(0.8, 0.6, 0.2), 0.3)
         )
   );
   world.push_back(
         std::make_unique<Sphere>(
            glm::vec3(-1.0, 0.0, -1.0),
            0.5,
            new Dielectric(1.5)
         )
   );

      
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
            const float u = 
               float(j + util::getRand01()) / float(config::RESOLUTION_W);
            const float v = 
               float(i + util::getRand01()) / float(config::RESOLUTION_H);

            Ray ray = camera.getRay(u, v);
            pixelColor += getColor(ray, world);
         }

         pixelColor /= float(config::N_SAMPLES);

         pixelColor = gammaCorrection(pixelColor);

         const unsigned int newR = int(255.99 * pixelColor.x);
         const unsigned int newG = int(255.99 * pixelColor.y);
         const unsigned int newB = int(255.99 * pixelColor.z);

         img << newR << " " << newG << " " <<newB << "\n";
      }
   }
}

PathTraicer::~PathTraicer() = default;
