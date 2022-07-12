#pragma once

#include <Simple-Path-Tracer/Ray.h>
#include <Simple-Path-Tracer/Camera.h>
#include <Simple-Path-Tracer/HitInfo.h>
#include <Simple-Path-Tracer/Surfaces/Sphere.h>

#include <memory>
#include <fstream>
#include <vector>

class PathTraicer
{
public:

   PathTraicer();
   ~PathTraicer();

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
