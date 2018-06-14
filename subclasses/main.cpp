#include <iostream>
#include "Shape.h"

int main() {
  // Create a basic shape object
  Shape shape;
  // Set some properties
  shape.set_alpha(0.5);
  shape.set_colour(Colour::BLUE);
  shape.set_line_type(LineType::DASHED);
  shape.set_origin({6, 7});
  // Draw
  shape.draw();
  return 0;
}