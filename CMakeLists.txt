cmake_minimum_required(VERSION 3.9.1)

project(SimplePathTracer)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall")

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/../bin")
set(PROJECT_SOURCE_DIR "${CMAKE_SOURCE_DIR}/src")
set(PROJECT_INCLUDE_DIR "${CMAKE_SOURCE_DIR}/include")
set(PROJECT_LIBRARIES_DIR "${CMAKE_SOURCE_DIR}/libs")

# GLM
set(GLM_DIR "${PROJECT_LIBRARIES_DIR}/glm")
add_subdirectory(${GLM_DIR} EXCLUDE_FROM_ALL)

# Executable
add_executable(${PROJECT_NAME} 
   "${PROJECT_SOURCE_DIR}/Simple-Path-Tracer/main.cpp"
   "${PROJECT_SOURCE_DIR}/Simple-Path-Tracer/PathTracer.cpp"
   "${PROJECT_SOURCE_DIR}/Simple-Path-Tracer/Camera.cpp"
   "${PROJECT_SOURCE_DIR}/Simple-Path-Tracer/Ray.cpp"
   "${PROJECT_SOURCE_DIR}/Simple-Path-Tracer/util.cpp"
   "${PROJECT_SOURCE_DIR}/Simple-Path-Tracer/Surfaces/Sphere.cpp"
   "${PROJECT_SOURCE_DIR}/Simple-Path-Tracer/Materials/Diffuse.cpp"
   "${PROJECT_SOURCE_DIR}/Simple-Path-Tracer/Materials/Dielectric.cpp"
   "${PROJECT_SOURCE_DIR}/Simple-Path-Tracer/Materials/Metal.cpp"
)

target_include_directories(
   ${PROJECT_NAME}
   PUBLIC
      "${PROJECT_INCLUDE_DIR}"
   PRIVATE
      "${PROJECT_SOURCE_DIR}"
)

target_link_libraries(${PROJECT_NAME} PUBLIC
   glm
)
