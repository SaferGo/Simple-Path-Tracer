#pragma once

#include <Simple-Ray-Tracer/RayTracer/Ray.h>
#include <Simple-Ray-Tracer/RayTracer/Camera.h>

#include <glm/glm.hpp>

#include <iostream>
#include <limits>
#include <random>
#include <vector>
#include <memory>

#define MAX_FLOAT std::numeric_limits<float>::max()

namespace util
{

   inline std::mt19937 gen = std::mt19937(time(0));
   inline std::uniform_real_distribution<> rand01(0.0, 1.0);

   float getRand01();
   glm::vec3 getRandUnitCircle();

   glm::vec3 getSpecularReflection(const glm::vec3 in, const glm::vec3 normal);
   glm::vec3 getDiffuseReflection(const glm::vec3 normal);
   glm::vec3 getRefraction(
         const glm::vec3 in,
         const glm::vec3 normal,
         const float ratioIndex,
         bool& refractionExists
   );

   float schlick(const float cosine, const float refractiveIndex);

   bool isRayEnteringIntoSurface(const Ray& in, glm::vec3 normal);
};
