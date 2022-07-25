#include <Simple-Ray-Tracer/RayTracer/Camera.h>

#include <Simple-Ray-Tracer/RayTracer/Ray.h>
#include <Simple-Ray-Tracer/Math/util.h>

#include <glm/glm.hpp>
#include <glm/gtc/constants.hpp>

Camera::Camera() {}

Camera::Camera(
      const glm::vec3 lookFrom,
      const glm::vec3 lookAt,
      const glm::vec3 vup,
      const float vfov,
      const float aspect
) {

   m_DOFenabled = false;

   // New Camera's Orthonormal Basis
   m_origin = lookFrom;
   m_w = glm::normalize(lookFrom - lookAt);    // new Z axis
   m_u = glm::normalize(glm::cross(vup, m_w)); // new X axis
   m_v = glm::cross(m_w, m_u);                 // new Y axis

   m_aspect = aspect;
   m_vfov   = vfov;

   float theta = m_vfov * glm::pi<float>() / 180;
   float halfHeight = glm::tan(theta / 2);
   float halfWidth = m_aspect * halfHeight;

   m_lowerLeftCorner = (
      m_origin -
      halfWidth  * m_u -
      halfHeight * m_v -
      m_w
   );
   m_horizontal = 2.0f * halfWidth  * m_u;
   m_vertical   = 2.0f * halfHeight * m_v;
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

void Camera::enableDOF(const float apertureSize, const float focusDist)
{
   m_DOFenabled = true;

   m_lensRadius = apertureSize / 2.0;

   float theta = m_vfov * glm::pi<float>() / 180;
   float halfHeight = glm::tan(theta / 2);
   float halfWidth = m_aspect * halfHeight;

   m_lowerLeftCorner = (
      m_origin -
      halfWidth  * focusDist * m_u -
      halfHeight * focusDist * m_v -
      m_w * focusDist
   );
   m_horizontal *= focusDist;
   m_vertical   *= focusDist;
}

Ray Camera::getRay(const float u, const float v) const
{
   if (m_DOFenabled)
   {
      glm::vec3 newDirection = m_lensRadius * util::getRandUnitCircle();
      glm::vec3 offset = m_u * newDirection.x + m_v * newDirection.y;
      return Ray(
            m_origin + offset,
            m_lowerLeftCorner +
            u * m_horizontal +
            v * m_vertical -
            m_origin - offset
      );
   } else
   {
      return Ray(
            m_origin,
            m_lowerLeftCorner + u * m_horizontal + v * m_vertical - m_origin
      );
   }
}
