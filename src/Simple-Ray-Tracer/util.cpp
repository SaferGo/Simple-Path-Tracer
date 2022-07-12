#include <Simple-Ray-Tracer/util.h>

// Gets a random direction from the unit sphere
glm::vec3 util::getRandUnitCircle()
{
   glm::vec3 newDirection;
   
   do
   {
      newDirection = glm::vec3(
            util::getRand01(),
            util::getRand01(),
            util::getRand01()
      ) * 2.0f - glm::vec3(1.0);

   } while(glm::dot(newDirection, newDirection) >= 1.0);

   return newDirection;
}

float util::getRand01()
{
   return rand01(gen);
}

// In this case the incident vector is pointing to the surface, normally
// it's pointing toward the light source.
glm::vec3 util::getSpecularReflection(
      const glm::vec3 in, const glm::vec3 normal
) {
   return glm::vec3(
         in -
         2 * glm::dot(in, normal) * normal
   );
}

glm::vec3 util::getDiffuseReflection(const glm::vec3 normal) {
   return normal + getRandUnitCircle();
}

glm::vec3 util::getRefraction(
         const glm::vec3 in,
         const glm::vec3 normal,
         const float ratioIndex,
         bool& refractionExists
) {

   const glm::vec3 normIn = glm::normalize(in);
   const float dt = glm::dot(normIn, normal);

   const float discriminant = 1.0 - ratioIndex * ratioIndex * (1 - dt * dt);

   if (discriminant > 0.0)
   {
      refractionExists = true;

      glm::vec3 refractionDir = 
         ratioIndex * (normIn - normal * dt) - normal * glm::sqrt(discriminant);

      return refractionDir;

   } else
   {
      refractionExists = false;

      return glm::vec3(0);
   }

}

float util::schlick(const float cosine, const float refractiveIndex)
{
   float r0 = (1.0 - refractiveIndex) / (1.0 + refractiveIndex);
   r0 = r0 * r0;

   return r0 + (1.0 - r0) * glm::pow((1.0 - cosine), 5);
}

bool util::isRayEnteringIntoSurface(const Ray& in, glm::vec3 normal)
{
   return !(glm::dot(in.getDirection(), normal) > 0.0);
}
