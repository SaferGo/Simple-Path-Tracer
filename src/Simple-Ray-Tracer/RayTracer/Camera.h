#pragma once

#include <Simple-Ray-Tracer/RayTracer/Ray.h>

#include <glm/glm.hpp>

class Camera
{
public:

   Camera();
   Camera(
         const glm::vec3 lookFrom,
         const glm::vec3 lookAt,
         const glm::vec3 vup,
         const float vfov,
         const float aspect
   );
   ~Camera();

   glm::vec3 getOrigin() const;
   glm::vec3 getLowerLeftCorner() const;
   glm::vec3 getHorizontal() const;
   glm::vec3 getVertical() const;
   float getLensRadius() const;

   void enableDOF(const float apertureSize, const float focusDist);

   Ray getRay(const float u, const float v) const;

private:

   glm::vec3 m_origin;
   glm::vec3 m_lowerLeftCorner;
   glm::vec3 m_horizontal;
   glm::vec3 m_vertical;
   glm::vec3 m_u, m_v, m_w;
   float m_vfov;
   float m_aspect;

   // Effects
   bool m_DOFenabled;
   // DOF
   float m_lensRadius;
};
