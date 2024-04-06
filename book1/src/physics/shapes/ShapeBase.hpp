#ifndef __ShapeBase_HPP__
#define __ShapeBase_HPP__

class Shape {
public:
  enum class ShapeType {
    sphere,
  };
  virtual ShapeType type() const = 0;
};

#endif
