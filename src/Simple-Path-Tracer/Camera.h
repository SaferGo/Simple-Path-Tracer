#pragma once

#include <Simple-Path-Tracer/Ray.h>

class Camera
{
public:

   Camera();
   Camera(
         const glm::vec3& otherOrigin,
         const glm::vec3& otherLowerLeftCorner,
         const glm::vec3& otherHorizontal,
         const glm::vec3& otherVertical
   );
   ~Camera();

   glm::vec3 getOrigin() const;
   glm::vec3 getLowerLeftCorner() const;
   glm::vec3 getHorizontal() const;
   glm::vec3 getVertical() const;
   Ray getRay(const float u, const float v) const;

private:

   glm::vec3 m_origin;
   glm::vec3 m_lowerLeftCorner;
   glm::vec3 m_horizontal;
   glm::vec3 m_vertical;
};
