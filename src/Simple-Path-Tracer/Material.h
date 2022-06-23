#pragma once

#include <Simple-Path-Tracer/Ray.h>
#include <Simple-Path-Tracer/HitInfo.h>

#include <glm/glm.hpp>

class Material
{

public:

   virtual Ray getReflectedRay(
         const glm::vec3& hit, const glm::vec3& normal, bool& isAbsorved
   ) = 0;
   virtual ~Material() {}

   glm::vec3 getAlbedo() const { return m_albedo; }

protected:
   
   glm::vec3 m_albedo;

};
