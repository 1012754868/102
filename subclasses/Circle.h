#ifndef CIRCLE_H
#define CIRCLE_H

#include "Shape.h"
#define PI 3.14159265

class Circle : Shape {
 public:
  Circle();                       // constructor
  void set_radius(float radius);  // mutator
  float get_area();               // accessor
 private:
  float _radius;
  float _area;
};

#endif