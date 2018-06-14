#include "Circle.h"

// list initialisation in constructor
Circle::Circle()
    : Shape(),
      _radius(1.0) {}

// mutator method to set radius
void Circle::set_radius(float radius) { _radius = radius; }

float Circle::get_area() { 
  _area = PI * _radius * _radius;
  return _area; 
  }
