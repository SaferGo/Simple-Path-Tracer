#include <Simple-Path-Tracer/Sphere.h>

#include <Simple-Path-Tracer/HitInfo.h>

#include <glm/glm.hpp>

#include <iostream>

Sphere::Sphere() {}

Sphere::Sphere(const glm::vec3& otherCenter, const float otherRadius)
: m_center(otherCenter), m_radius(otherRadius) {}

glm::vec3 Sphere::getCenter() const
{
   return m_center;
}

float Sphere::getRadius() const
{
   return m_radius;
}

bool Sphere::isHitted(
      const Ray& ray, const float tMin, const float tMax, HitInfo& hitInfo
) {
   glm::vec3 oc = ray.getOrigin() - m_center;
   // Optimize y saque los 2(cancele).
   float a = glm::dot(ray.getDirection(), ray.getDirection());
   float b = glm::dot(ray.getDirection(), oc);
   float c = glm::dot(oc, oc) - (m_radius * m_radius);

   float discriminant = b * b - a * c;

   if (discriminant > 0.0f)
   {
      // FIX/IMPROVE THIS

      // We return the 't' that is closer to the camera. There is no point
      // in returning the one that is behind the closest hit(in the case where
      // there are 2 hits).
      float t1 = (-b - glm::sqrt(discriminant)) / a;
      float t2 = (-b + glm::sqrt(discriminant)) / a;

      if (t1 < t2 && t1 > tMin && t1 < tMax)
      {
         hitInfo.t   = t1;
         hitInfo.pos = ray.getPointAtParameter(t1);
      }
      else if (t2 < t1 && t2 > tMin && t2 < tMax)
      {
         hitInfo.t   = t2;
         hitInfo.pos = ray.getPointAtParameter(t2);
      }
      else
         return false;

      hitInfo.normal  = (hitInfo.pos - m_center) / m_radius;

      return true;
   }
   
   return false;
}

Sphere::~Sphere() = default;
