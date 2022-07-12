#pragma once

#include <Simple-Path-Tracer/Ray.h>
#include <Simple-Path-Tracer/Surface.h>
#include <Simple-Path-Tracer/Material.h>

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
