#pragma once

#include <Simple-Path-Tracer/Ray.h>
#include <Simple-Path-Tracer/Sphere.h>
#include <Simple-Path-Tracer/Hitable.h>
#include <Simple-Path-Tracer/HitInfo.h>

#include <memory>
#include <fstream>
#include <vector>

// Hacerlo singleton?

class PathTraicer
{
public:

   PathTraicer();
   ~PathTraicer();
   void run();

private:

   void render(std::fstream& img);
   glm::vec3 getColor(
         const Ray& ray,
         std::vector<std::unique_ptr<Hitable>>& world,
         const int depth
   ) const;
   glm::vec3 gammaCorrection(const glm::vec3& pixelColor) const;
};
