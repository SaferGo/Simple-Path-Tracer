# Simple Ray Tracer

```diff
+ Hey there! 
```

This is my implementation of a simple Ray Tracer. There is a lot of space for more features but the purpose of this project was to make my first steps in a Ray Tracer and to leave a base-template to create a more complex one in the future.

## Preview
<p align="center">
  <img src="https://user-images.githubusercontent.com/19228971/178521019-93b74f3e-f9ea-4de8-8e49-68aa15a88aa8.jpeg" />
</p>

## Features
- Movable Camera.
- MSAA (Multisampling Antialiasing).
- Materials: Dielectric, Diffuse and Metal.
- Surface: Sphere.
- Depth of field.
- Output file format: PPM 

- All the parameters of the features can be changed in the config.h file.


## Preview of the features

<h3 align="center">Movable Camera</h3>

<p align="center">
  <img src="https://user-images.githubusercontent.com/19228971/178526657-7a8f36e8-47e5-48ac-bb3c-70085567cc22.jpeg" />
</p>

<h3 align="center">MSAA</h3>

<p align="center">
<img src="https://user-images.githubusercontent.com/19228971/178540446-5c46ff74-4497-4b6e-9c71-ff4dceb39acb.jpeg" width="40%" height="40%" /><img src="https://user-images.githubusercontent.com/19228971/178537351-26489eae-07d8-486e-9ded-70e9663f69c3.jpeg" width="40%" height="40%"/></p>
<p align ="center"> Left image without MSAA  -  Right image with MSAA(# of samples = 100) </p>
</p>


<h3 align="center">Diffuse Material</h3>

<p align="center">
  <img src="https://user-images.githubusercontent.com/19228971/178542458-39290277-57ec-4633-9a4b-ef6368aa3cb2.jpeg" />
</p>

<h3 align="center">Dielectric Material</h3>

<p align="center">
  <img src="https://user-images.githubusercontent.com/19228971/178546408-6565aeec-e131-47d8-9737-2ff8f055c6a0.jpeg" />
</p>

<h3 align="center">Metal Material</h3>

<p align="center">
  <img src="https://user-images.githubusercontent.com/19228971/178548651-a94f43b9-ce79-440f-bdd3-763ce231b34e.jpeg" />
</p>

<h3 align="center">DOF</h3>

<p align="center">
  <img src="https://user-images.githubusercontent.com/19228971/178552159-6fc79557-7134-4e47-aefb-be04c6b7c163.jpeg" />
  <p align ="center"> VFO: 30, Aperture Size: 0.3 </p>
</p>



## Environment
  - Linux
  - C++ 17
  - GLM

## Prerequisites
- g++
- CMake >= 3.91

## Documentation
- https://raytracing.github.io/books/RayTracingInOneWeekend.html
- https://viclw17.github.io/writing.html

## How to run it

```diff
$ git clone https://github.com/SaferGo/Simple-Ray-Tracer.git
$ cd Simple-Ray-Tracer
$ bash run.sh
You can find the img file in the output folder.
```
