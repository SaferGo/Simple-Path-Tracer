#pragma once

#include <Simple-Ray-Tracer/Materials/Material.h>
#include <Simple-Ray-Tracer/RayTracer/Ray.h>

#include <glm/glm.hpp>

class Dielectric : public Material
{

public:

   Dielectric(const glm::vec3 otherAlbedo, const float otherRefractiveIndex);
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
