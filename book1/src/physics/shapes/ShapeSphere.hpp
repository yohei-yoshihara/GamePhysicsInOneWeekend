#ifndef __ShapeSphere_HPP__
#define __ShapeSphere_HPP__

#include "ShapeBase.hpp"

class ShapeSphere: public Shape {
public:
  ShapeSphere(float radius) :
    m_radius(radius) {}
  ShapeType type() const override { return ShapeType.sphere; }

  float m_radius;
};

#endif
