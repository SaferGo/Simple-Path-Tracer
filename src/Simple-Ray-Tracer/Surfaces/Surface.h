#pragma once

#include <Simple-Ray-Tracer/RayTracer/Ray.h>
#include <Simple-Ray-Tracer/Surfaces/Surface.h>
#include <Simple-Ray-Tracer/Materials/Material.h>

#include <glm/glm.hpp>

#include <memory>
#include <iostream>

class Surface
{
public:

   virtual bool isHitted(
         const Ray& inRay, const float tMin, const float tMax, HitInfo& hitInfo
   ) = 0;
   Material* getMaterial() { return m_material; }

protected:

   Material* m_material;
};
