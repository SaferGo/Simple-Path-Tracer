#pragma once

#include <Simple-Ray-Tracer/Material.h>
#include <Simple-Ray-Tracer/Ray.h>

#include <glm/glm.hpp>

class Dielectric : public Material
{

public:

   Dielectric(const float otherRefractiveIndex);
   ~Dielectric() override;

   Ray scatter(
         const Ray& inRay,
         const glm::vec3& hit,
         const glm::vec3& normal,
         bool& isAbsorved
   ) override;

private:

   float m_refractiveIndex;

};
