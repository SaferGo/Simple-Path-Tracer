#pragma once

#include <Simple-Path-Tracer/Ray.h>

#include <glm/glm.hpp>

class Camera
{
public:

   Camera(
         const glm::vec3 lookFrom,
         const glm::vec3 lookAt,
         const glm::vec3 vup,
         const float vfov,
         const float aspect,
         const float aperture,
         const float focusDist
   );
   ~Camera();

   glm::vec3 getOrigin() const;
   glm::vec3 getLowerLeftCorner() const;
   glm::vec3 getHorizontal() const;
   glm::vec3 getVertical() const;
   float getLensRadius() const;
   Ray getRay(const float u, const float v) const;

private:

   glm::vec3 m_origin;
   glm::vec3 m_lowerLeftCorner;
   glm::vec3 m_horizontal;
   glm::vec3 m_vertical;
   glm::vec3 m_u, m_v, m_w;
   float     m_lensRadius;
};
