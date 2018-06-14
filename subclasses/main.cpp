#include <iostream>
#include "Shape.h"
#include "Circle.h"

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

  // Now create a circle (that inherits from shape)
  Circle circle;
  circle.set_radius(2.0);
  circle.set_origin({9, 9});
  circle.set_colour(Colour::PURPLE);
  circle.set_alpha(0.8);
  circle.draw();
  float circle_area = circle.get_area();
  std::cout << "Circle area = " << circle_area << std::endl;

  return 0;
}