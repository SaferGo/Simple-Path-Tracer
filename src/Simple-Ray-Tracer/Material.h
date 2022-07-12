#pragma once

#include <Simple-Ray-Tracer/Ray.h>
#include <Simple-Ray-Tracer/HitInfo.h>

#include <glm/glm.hpp>

class Material
{

public:

   virtual Ray scatter(
         const Ray& inRay,
         const glm::vec3& hit,
         const glm::vec3& normal,
         bool& isAbsorved
   ) = 0;

   
   virtual ~Material() {}

   glm::vec3 getAlbedo() const { return m_albedo; }

protected:
   
   // Fraction of light that is reflected by a surface.
   // 0 -> absorbs all light striking it
   // 1 -> perfect reflector(mirror)
   glm::vec3 m_albedo;

};
