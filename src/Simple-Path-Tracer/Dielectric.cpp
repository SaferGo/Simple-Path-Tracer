#include <Simple-Path-Tracer/Dielectric.h>

#include <Simple-Path-Tracer/Ray.h>
#include <Simple-Path-Tracer/util.h>

#include <glm/glm.hpp>

Dielectric::Dielectric(const float otherRefractiveIndex)
: m_refractiveIndex(otherRefractiveIndex)
{
   // Attenuation is always 1 because dielectric surfaces absorb nothing.
   m_albedo = glm::vec3(1.0);
}

Dielectric::~Dielectric() {}

Ray Dielectric::scatter(
      const Ray& inRay,
      const glm::vec3& hit,
      const glm::vec3& normal,
      bool& isAbsorved
) {

   isAbsorved = false;

   glm::vec3 outwardNormal;
   // The ratio of phase velocities in the two surfaces, or
   // the reciprocal of the ratio of the indices of refraction
   float indexRatio;
   float cosine;

   // Step #1:
   // Here we deal with the ray enter/exit surface
   if (util::isRayEnteringIntoSurface(inRay, normal))
   {
      outwardNormal = normal;
      indexRatio = 1.0 / m_refractiveIndex;
      cosine = -glm::dot(glm::normalize(inRay.getDirection()), normal);
      
   } else
   {
      outwardNormal = -normal;
      indexRatio = m_refractiveIndex;
      cosine = glm::dot(glm::normalize(inRay.getDirection()), normal);
   }

   // Step #2:
   // Here we calculate the refraction and reflection vector

   bool refractionExists = false;
   glm::vec3 refraction = util::getRefraction(
         inRay.getDirection(),
         outwardNormal,
         indexRatio,
         refractionExists
   );
   glm::vec3 reflection = util::getSpecularReflection(
         inRay.getDirection(),
         normal
   );

   // Step #3:
   // Here we decide if we scatter the reflection or the refraction vector.
   // Normally in real life(in dielectric surfaces), it happens both but 
   // since the Path Tracing algorithm throws many rays and averages the
   // traced color per pixel, we'll get the averaged result through both 
   // reflection and refraction.

   float reflectionProb;
   if (refractionExists)
      reflectionProb =  util::schlick(cosine, m_refractiveIndex);
   else
      reflectionProb = 1.0;

   return (util::getRand01() < reflectionProb) ? 
      Ray(hit, reflection) : Ray(hit, refraction);
}

