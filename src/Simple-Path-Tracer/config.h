#pragma once

#include <glm/glm.hpp>

namespace config
{
   inline constexpr char* IMG_TITLE  = (char*)"img.jpg";

   inline constexpr int RESOLUTION_W = 600; //200
   inline constexpr int RESOLUTION_H = 400; //100

   // Antialiasing
   inline constexpr int N_SAMPLES    = 100;

   // Number of bouncings rays per pixel
   inline constexpr int MAX_DEPTH    = 20;

   namespace camera
   {
      inline constexpr glm::vec3 LOOK_FROM(-1.5, 0.5, 3.0);
      inline constexpr glm::vec3 LOOK_AT(0.0, 0.0, -1.0);
      inline constexpr glm::vec3 VUP(0.0, 1.0, 0.0);
      inline constexpr float ASPECT = float(RESOLUTION_W) / float(RESOLUTION_H);
      inline constexpr float VFOV = 30.0f;

      // Effects
      inline constexpr bool DOF_ENABLED = false;

      // Depth Of Field
      namespace DOF
      {
         inline constexpr glm::vec3 FOCAL_POINT(-1.0, 0.0, -1.0);

         inline constexpr float APERTURE_SIZE = 0.5f;
         inline const float FOCAL_DISTANCE = glm::length(
               LOOK_FROM - FOCAL_POINT
         );
      };
   };
};
