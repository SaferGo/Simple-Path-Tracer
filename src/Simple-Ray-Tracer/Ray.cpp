#include <Simple-Ray-Tracer/Ray.h>

Ray::Ray() {}

Ray::Ray(const glm::vec3& otherOrigin, const glm::vec3& otherDirection)
: m_origin(otherOrigin), m_direction(otherDirection) {}

Ray::~Ray() = default;

glm::vec3 Ray::getOrigin() const
{
   return m_origin;
}

glm::vec3 Ray::getDirection() const
{
   return m_direction;
}


glm::vec3 Ray::getPointAtParameter(const float t) const
{
   return m_origin + (t * m_direction);
}

