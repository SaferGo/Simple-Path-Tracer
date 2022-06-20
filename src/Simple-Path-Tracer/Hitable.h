#pragma once

#include <Simple-Path-Tracer/Ray.h>
#include <Simple-Path-Tracer/HitInfo.h>

#include <glm/glm.hpp>

class Hitable
{
public:

   virtual bool isHitted(
         const Ray& ray, const float tMin, const float tMax, HitInfo& hitInfo
   ) = 0;
};
