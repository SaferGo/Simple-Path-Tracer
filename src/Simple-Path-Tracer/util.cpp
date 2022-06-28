#include <Simple-Path-Tracer/util.h>

// Gets a random direction from the unit sphere
glm::vec3 util::getRandUnitCircle()
{
   glm::vec3 newDirection;
   
   do
   {
      newDirection = glm::vec3(
            (util::getRand01() * 2.0) - 1.0,
            (util::getRand01() * 2.0) - 1.0,
            (util::getRand01() * 2.0) - 1.0
      );
   } while(glm::dot(newDirection, newDirection) >= 1.0);

   return newDirection;
}

// In this case the incident vector is pointing to the surface, normally
// it's pointing toward the light source.
glm::vec3 util::getReflectedVector(glm::vec3 in, glm::vec3 normal)
{
   glm::vec3 normIn = glm::normalize(in);

   return glm::vec3(
         normIn -
         2 * glm::dot(normIn, normal) * normal
   );
}

float util::getRand01()
{
   return rand01(gen);
}
