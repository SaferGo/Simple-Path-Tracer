#pragma once

#include <glm/glm.hpp>

struct HitInfo
{
   float t;
   glm::vec3 pos;
   glm::vec3 normal;
};

class Ray
{
public:

   Ray();
   Ray(const glm::vec3& otherOrigin, const glm::vec3& otherDirection);
   ~Ray();

   glm::vec3 getOrigin() const;
   glm::vec3 getDirection() const;
   glm::vec3 getPointAtParameter(const float t) const;

private:

   glm::vec3 m_origin;
   glm::vec3 m_direction;
};
