#ifndef FOOTBALLER_H
#define FOOTBALLER_H

#include <string>
#include "Person.h"

enum class Position { Goalkeeper, Defender, Midfielder, Forward };

class Footballer : public Person {
 public:
  // constructors
  Footballer();
  Footballer(std::string forename, std::string surname, Date dob,
             Position position, int appearances, int goals);
  // mutators
  void set_club(std::string club);
  void set_position(Position position);
  void set_goals(int goals);
  void set_appearances(int appearances);
  // accessors
  std::string get_club();
  std::string get_position();
  int get_goals();
  int get_appearances();
  // member methods
  void scored();
  void played_game();


  // member variables
 private:
  std::string _club;
  Position _position;
  int _appearances;
  int _goals;
};
#endif