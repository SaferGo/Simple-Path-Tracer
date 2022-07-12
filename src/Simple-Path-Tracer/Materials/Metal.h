#pragma once

#include <Simple-Path-Tracer/Material.h>
#include <Simple-Path-Tracer/Ray.h>

#include <glm/glm.hpp>

class Metal : public Material
{

public:

   Metal(const glm::vec3 otherAlbedo, const float otherFuzz);
   ~Metal() override;

   Ray scatter(
         const Ray& inRay,
         const glm::vec3& hit,
         const glm::vec3& normal,
         bool& isAbsorved
   ) override;

private:

   float m_fuzz;

};
