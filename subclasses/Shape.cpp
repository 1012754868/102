#include "Shape.h"

// list initialisation in constructor
Shape::Shape()
    : _name("Shape"),
      _colour(Colour::RED),
      _line_type(LineType::SOLID),
      _origin({0, 0}),
      _alpha(1.0) {}

// mutator definitions
void Shape::set_colour(Colour colour) { _colour = colour; }
void Shape::set_line_type(LineType type) { _line_type = type; }
void Shape::set_origin(Point2D origin) { _origin = origin; }
void Shape::set_alpha(float alpha) {
  // check for valid alpha value (0.0 to 1.0)
  if (alpha < 0.0) {
    alpha = 0.0;
  } else if (alpha > 1.0) {
    alpha = 1.0;
  }
  _alpha = alpha;
}
// drawing method
void Shape::draw() {
  std::cout << "Drawing " << _name << " at (" << _origin.x << "," << _origin.y << ")\n";
}