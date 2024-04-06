cmake_minimum_required(VERSION 3.29)
project(game_physics)
add_executable(
  game_physics
  src/math/Vector.h
  src/math/Quat.h
  src/math/Matrix.h
  src/physics/shapes/ShapeBase.hpp
  src/physics/shapes/ShapeSphere.hpp
  src/main.cpp
  )
set_property(TARGET game_physics PROPERTY CXX_STANDARD 23)
