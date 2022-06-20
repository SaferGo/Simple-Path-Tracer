#pragma once

#include <Simple-Path-Tracer/Hitable.h>
#include <Simple-Path-Tracer/Ray.h>
#include <Simple-Path-Tracer/HitInfo.h>

#include <glm/glm.hpp>

class Sphere: public Hitable
{
public:

   Sphere();
   Sphere(const glm::vec3& otherCenter, const float otherRadius);
   ~Sphere();
   virtual bool isHitted(
         const Ray& ray, const float tMin, const float tMax, HitInfo& hitInfo
   );
   glm::vec3 getCenter() const;
   float getRadius() const;

private:

   glm::vec3 m_center;
   float m_radius;
};