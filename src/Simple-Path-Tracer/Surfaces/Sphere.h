#pragma once

#include <Simple-Path-Tracer/Surface.h>
#include <Simple-Path-Tracer/Ray.h>
#include <Simple-Path-Tracer/HitInfo.h>
#include <Simple-Path-Tracer/Material.h>

#include <glm/glm.hpp>

class Sphere: public Surface
{
public:

   Sphere(
         const glm::vec3& otherCenter,
         const float otherRadius,
         Material* otherMaterial
   );
   ~Sphere();
   bool isHitted(
         const Ray& inRay, const float tMin, const float tMax, HitInfo& hitInfo
   ) override;
   glm::vec3 getCenter() const;
   float getRadius() const;

private:

   glm::vec3 m_center;
   float m_radius;
};
