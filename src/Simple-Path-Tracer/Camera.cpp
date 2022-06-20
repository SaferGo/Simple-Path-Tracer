#include <Simple-Path-Tracer/Camera.h>

#include <Simple-Path-Tracer/Ray.h>

Camera::Camera()
{
   m_lowerLeftCorner = glm::vec3(-2.0, -1.0, -1.0);
   m_horizontal      = glm::vec3(4.0, 0.0, 0.0);
   m_vertical        = glm::vec3(0.0, 2.0, 0.0);
   m_origin          = glm::vec3(0.0);
}

Camera::Camera(
         const glm::vec3& otherOrigin,
         const glm::vec3& otherLowerLeftCorner,
         const glm::vec3& otherHorizontal,
         const glm::vec3& otherVertical
) : m_origin(otherOrigin),
    m_lowerLeftCorner(otherLowerLeftCorner),
    m_horizontal(otherHorizontal),
    m_vertical(otherVertical) 
{}

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

Ray Camera::getRay(const float u, const float v) const
{
   return Ray(
         m_origin,
         m_lowerLeftCorner + u * m_horizontal + v * m_vertical - m_origin
   );
}
