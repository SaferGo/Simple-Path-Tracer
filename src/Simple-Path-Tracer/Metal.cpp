#include <Simple-Path-Tracer/Metal.h>

#include <Simple-Path-Tracer/Ray.h>
#include <Simple-Path-Tracer/util.h>

#include <glm/glm.hpp>

Metal::Metal(const glm::vec3 otherAlbedo, const float otherFuzz)
{ 
   m_albedo = otherAlbedo; 

   if (otherFuzz > 1.0 || otherFuzz < 0.0)
      m_fuzz = 1.0;
   else
      m_fuzz = otherFuzz;
}

Ray Metal::scatter(
      const Ray& inRay,
      const glm::vec3& hit,
      const glm::vec3& normal,
      bool& isAbsorved
) {

   glm::vec3 reflectionDir = util::getSpecularReflection(
         glm::normalize(inRay.getDirection()),
         normal
   );

   reflectionDir += m_fuzz * util::getRandUnitCircle();

   isAbsorved = (glm::dot(reflectionDir ,normal) < 0);

   return Ray(hit, reflectionDir);
}

Metal::~Metal() {}
