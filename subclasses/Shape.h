#ifndef SHAPE_H
#define SHAPE_H

#include <iostream>
#include <string>

// class enums for colour and line type of the shape
enum class Colour { RED, YELLOW, PINK, GREEN, ORANGE, PURPLE, BLUE };
enum class LineType { NONE, SOLID, DASHED };

// POD struct to hold x and y co-ordinates
struct Point2D {
  int x;
  int y;
};

class Shape {
 public:
  // constructor
  Shape();
  // mutators for setting private member variables
  void set_colour(Colour colour);
  void set_line_type(LineType type);
  void set_origin(Point2D origin);
  void set_alpha(float alpha);
  // accessor for getting private member variables
  float get_area();
  // method for drawing shape on screen
  void draw();

 private:
  std::string _name;
  Colour _colour;
  LineType _line_type;
  Point2D _origin;
  float _alpha;
  float _area;
};

#endif