#include <Simple-Path-Tracer/Camera.h>

#include <Simple-Path-Tracer/Ray.h>
#include <Simple-Path-Tracer/util.h>

#include <glm/glm.hpp>
#include <glm/gtc/constants.hpp>

Camera::Camera(
      const glm::vec3 lookFrom,
      const glm::vec3 lookAt,
      const glm::vec3 vup,
      const float vfov,
      const float aspect,
      const float aperture,
      const float focusDist
) {
   m_lensRadius = aperture / 2.0;
   float theta = vfov * glm::pi<float>() / 180;
   float halfHeight = glm::tan(theta / 2);
   float halfWidth = aspect * halfHeight;

   m_origin = lookFrom;
   m_w = glm::normalize(lookFrom - lookAt);
   m_u = glm::normalize(glm::cross(vup, m_w));
   m_v = glm::cross(m_w, m_u);

   m_lowerLeftCorner = (
      m_origin -
      halfWidth * focusDist * m_u -
      halfHeight * focusDist * m_v -
      m_w * focusDist
   );
   m_horizontal = 2.0f * halfWidth * focusDist * m_u;
   m_vertical = 2.0f * halfHeight * focusDist * m_v;
}

Camera::~Camera() = default;


glm::vec3 Camera::getOrigin() const
{
   return m_origin;
}

glm::vec3 Camera::getLowerLeftCorner() const
{
   return m_lowerLeftCorner;
}

glm::vec3 Camera::getHorizontal() const
{
   return m_horizontal;
}

glm::vec3 Camera::getVertical() const
{
   return m_vertical;
}

float Camera::getLensRadius() const
{
   return m_lensRadius;
}

Ray Camera::getRay(const float u, const float v) const
{
   glm::vec3 newDirection = m_lensRadius * util::getRandUnitCircle();
   glm::vec3 offset = m_u * newDirection.x + m_v * newDirection.y;
   return Ray(
         m_origin + offset,
         m_lowerLeftCorner + u * m_horizontal + v * m_vertical - m_origin - offset
   );
}
