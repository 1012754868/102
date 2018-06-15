#ifndef CIRCLE_H
#define CIRCLE_H

#include "Shape.h"
#define PI 3.1415926535

class Circle : public Shape {
 public:
  //constructor
  Circle();
  // mutator
  void set_radius(float radius);
  // accessor
  float get_area();
 private:
  float _radius;
};

#endif