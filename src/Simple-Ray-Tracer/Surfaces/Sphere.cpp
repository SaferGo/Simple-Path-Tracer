#include <Simple-Ray-Tracer/Surfaces/Sphere.h>

#include <Simple-Ray-Tracer/RayTracer/Ray.h>
#include <Simple-Ray-Tracer/Materials/Material.h>

#include <glm/glm.hpp>

Sphere::Sphere(
      const glm::vec3& otherCenter,
      const float otherRadius,
      Material* otherMaterial
) : m_center(otherCenter), m_radius(otherRadius)
{ 
   m_material = otherMaterial;
}

glm::vec3 Sphere::getCenter() const
{
   return m_center;
}

float Sphere::getRadius() const
{
   return m_radius;
}

bool Sphere::isHitted(
      const Ray& inRay, const float tMin, const float tMax, HitInfo& hitInfo
) {
   glm::vec3 oc = inRay.getOrigin() - m_center;
   // Optimize y saque los 2(cancele).
   float a = glm::dot(inRay.getDirection(), inRay.getDirection());
   float b = glm::dot(inRay.getDirection(), oc);
   float c = glm::dot(oc, oc) - (m_radius * m_radius);

   float discriminant = b * b - a * c;

   if (discriminant > 0)
   {
      // FIX/IMPROVE THIS

      // We return the 't' that is closer to the ray. There is no point in
      // returning the one that is further away/behind.
      float t1 = (-b - glm::sqrt(discriminant)) / a;
      float t2 = (-b + glm::sqrt(discriminant)) / a;

      if (t1 > tMin && t1 < tMax)
      {
         hitInfo.t   = t1;
         hitInfo.pos = inRay.getPointAtParameter(t1);
      }
      else if (t2 > tMin && t2 < tMax)
      {
         hitInfo.t   = t2;
         hitInfo.pos = inRay.getPointAtParameter(t2);
      }
      else
         return false;

      hitInfo.normal  = (hitInfo.pos - m_center) / m_radius;

      return true;
   }
   
   return false;
}

Sphere::~Sphere()
{
   delete m_material;
}
