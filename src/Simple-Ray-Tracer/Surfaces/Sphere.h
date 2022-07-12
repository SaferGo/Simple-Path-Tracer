#pragma once

#include <Simple-Ray-Tracer/Surface.h>
#include <Simple-Ray-Tracer/Ray.h>
#include <Simple-Ray-Tracer/HitInfo.h>
#include <Simple-Ray-Tracer/Material.h>

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
