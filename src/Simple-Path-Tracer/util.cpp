#include <Simple-Path-Tracer/util.h>

// Gets a random direction from the unit sphere
glm::vec3 util::getRandDirection()
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

float util::getRand01()
{
   return rand01(gen);
}
