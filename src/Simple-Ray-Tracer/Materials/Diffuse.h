#pragma once

#include <Simple-Ray-Tracer/Materials/Material.h>
#include <Simple-Ray-Tracer/RayTracer/Ray.h>

#include <glm/glm.hpp>

class Diffuse : public Material
{

public:

   Diffuse(const glm::vec3 otherAlbedo);
   ~Diffuse() override;
   Ray scatter(
         const Ray& inRay,
         const glm::vec3& hit,
         const glm::vec3& normal,
         bool& isAbsorved
   ) override;
};
