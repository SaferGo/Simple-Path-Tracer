#include <Simple-Path-Tracer/PathTracer.h>

#include <Simple-Path-Tracer/config.h>
#include <Simple-Path-Tracer/util.h>
#include <Simple-Path-Tracer/Camera.h>
#include <Simple-Path-Tracer/Ray.h>
#include <Simple-Path-Tracer/Surfaces/Sphere.h>
#include <Simple-Path-Tracer/Materials/Diffuse.h>
#include <Simple-Path-Tracer/Materials/Metal.h>
#include <Simple-Path-Tracer/Materials/Dielectric.h>

#include <glm/glm.hpp>

#include <iostream>
#include <vector>
#include <memory>


PathTraicer::PathTraicer()
{
   initCamera();
   initWorld();
}

void PathTraicer::initCamera()
{
   camera = Camera(
         config::camera::LOOK_FROM,
         config::camera::LOOK_AT,
         config::camera::VUP,
         config::camera::VFOV,
         config::camera::ASPECT
   );
   if (config::camera::DOF_ENABLED)
      camera.enableDOF(
            config::camera::DOF::APERTURE_SIZE,
            config::camera::DOF::FOCAL_DISTANCE
      );
}

void PathTraicer::initWorld()
{
   // Floor
   world.push_back(
         std::make_unique<Sphere>(
            glm::vec3(0.0, -100.5, -1.0),
            100.0,
            new Diffuse(glm::vec3(0.8, 0.8, 0.0))
         )
   );

   world.push_back(
         std::make_unique<Sphere>(
            glm::vec3(0.0, 0.0, -1.0),
            0.5,
            new Diffuse(glm::vec3(0.1, 0.2, 0.5))
         )
   );
      
   world.push_back(
         std::make_unique<Sphere>(
            glm::vec3(1.0, 0.0, -1.0),
            0.5,
            new Metal(glm::vec3(0.8, 0.6, 0.2), 0.0)
         )
   );
   world.push_back(
         std::make_unique<Sphere>(
            glm::vec3(-1.0, 0.0, -1.0),
            0.5,
            new Dielectric(1.5)
         )
   );

}

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

glm::vec3 PathTraicer::getColor(const Ray& ray, const int depth) const
{
   if (depth >= config::MAX_DEPTH)
      return glm::vec3(0.0);

   HitInfo hitInfo;
   Material* material;
   glm::vec3 closestHit(0.0);
   glm::vec3 normal(0.0);
   float closestT = MAX_FLOAT;

   bool somethingWasHitted = false;
   for (auto& object : world)
   {
      if (object->isHitted(ray, 0.001, closestT, hitInfo))
      {
         material     = object->getMaterial();
         closestHit   = hitInfo.pos;
         normal       = hitInfo.normal;
         closestT     = hitInfo.t;

         somethingWasHitted = true;
      }
   }

   if (somethingWasHitted)
   {
      bool isAbsorved = false;

      Ray outRay = material->scatter(
            ray, closestHit, normal, isAbsorved
      );

      if (isAbsorved)
         return glm::vec3(0.0);
      else
      {
         glm::vec3 attenuation = material->getAlbedo();

         return attenuation * getColor(outRay, depth + 1);
      }
   }

   // background
   glm::vec3 uv = glm::normalize(ray.getDirection());
   const float t = 0.5 * (uv.y + 1.0);
   return (1.0f - t) * glm::vec3(1.0) + t * glm::vec3(0.5, 0.7, 1.0);
}

glm::vec3 PathTraicer::MSAA(const int x, const int y) const
{
   glm::vec3 pixelColor(0.0);
   for (int p = 0; p < config::N_SAMPLES; p++)
   {
      const float u = 
         float(x + util::getRand01()) / float(config::RESOLUTION_W);
      const float v =
         float(y + util::getRand01()) / float(config::RESOLUTION_H);

        Ray ray = camera.getRay(u, v);
        pixelColor += getColor(ray, 0);
   }

   return (pixelColor / float(config::N_SAMPLES));

}

void PathTraicer::render(std::fstream& img)
{
   img << "P3\n";
   img << config::RESOLUTION_W << " " << config::RESOLUTION_H << "\n";
   img << "255\n";
   
   const float nPixels = config::RESOLUTION_H * config::RESOLUTION_W;
   float pixelsLeft = nPixels;

   for (int i = config::RESOLUTION_H - 1; i >= 0; i--)
   {
      for (int j = 0; j < config::RESOLUTION_W; j++)
      {
         glm::vec3 pixelColor = glm::vec3(0.0);

         pixelColor = MSAA(j, i);
         pixelColor = gammaCorrection(pixelColor);

         const unsigned int newR = int(255.99 * pixelColor.x);
         const unsigned int newG = int(255.99 * pixelColor.y);
         const unsigned int newB = int(255.99 * pixelColor.z);

         img << newR << " " << newG << " " << newB << "\n";

         pixelsLeft -= 1;
         std::cout << (nPixels - pixelsLeft) * 100 / nPixels << "%\n";
      }
   }
}

PathTraicer::~PathTraicer() = default;
