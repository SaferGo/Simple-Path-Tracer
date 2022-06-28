#pragma once

#include <glm/glm.hpp>

#include <random>

namespace util
{
   inline std::mt19937 gen = std::mt19937(time(0));
   inline std::uniform_real_distribution<> rand01(0.0, 1.0);

   float getRand01();
   glm::vec3 getRandUnitCircle();
   glm::vec3 getReflectedVector(glm::vec3 in, glm::vec3 normal);
};
