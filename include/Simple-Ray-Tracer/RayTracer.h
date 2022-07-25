#pragma once

#include <Simple-Ray-Tracer/RayTracer/Ray.h>
#include <Simple-Ray-Tracer/RayTracer/Camera.h>
#include <Simple-Ray-Tracer/Surfaces/Sphere.h>

#include <memory>
#include <fstream>
#include <vector>

class RayTracer
{
public:

   RayTracer();
   ~RayTracer();

   void run();

private:

   Camera camera;
   std::vector<std::unique_ptr<Surface>> world;

   void initWorld();
   void initCamera();

   void render(std::fstream& img);
   glm::vec3 getColor(const Ray& ray, const int depth) const;

   glm::vec3 MSAA(const int x, const int y) const;
   glm::vec3 gammaCorrection(const glm::vec3& pixelColor) const;

};
