#pragma once

#include <Simple-Path-Tracer/Material.h>

#include <glm/glm.hpp>

class Diffuse : public Material
{

public:

   Diffuse(const glm::vec3& otherAlbedo);

   Ray getReflectedRay(
         const glm::vec3& hit, const glm::vec3& normal, bool& isAbsorved
   ) override;
   virtual ~Diffuse();

};
