#include <Simple-Path-Tracer/Diffuse.h>

#include <Simple-Path-Tracer/Ray.h>
#include <Simple-Path-Tracer/util.h>

#include <glm/glm.hpp>

Diffuse::Diffuse(const glm::vec3 otherAlbedo)
{ 
   m_albedo = otherAlbedo; 
}

Ray Diffuse::scatter(
      const Ray& inRay, 
      const glm::vec3& hit,
      const glm::vec3& normal,
      bool& isAbsorved
) {
   isAbsorved = false;

   return Ray(hit, util::getDiffuseReflection(normal));
}

Diffuse::~Diffuse() {}
