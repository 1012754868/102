#include "Footballer.h"

// constructors (default)
Footballer::Footballer()
    : Person("A", "Player", {1, Month::Jan, 1900}),
      _club("Free Agent"),
      _position(Position::Goalkeeper),
      _appearances(0),
      _goals(0) {}

Footballer::Footballer(std::string forename, std::string surname, Date dob,
                       Position position, int appearances, int goals)
    : Person(forename, surname, dob),
      _position(position),
      _appearances(appearances),
      _goals(goals) {}

// mutators
void Footballer::set_club(std::string club) { _club = club; }
void Footballer::set_position(Position position) { _position = position; }
void Footballer::set_goals(int goals) { _goals = goals; }
void Footballer::set_appearances(int appearances) {
  _appearances = appearances;
}
// accessors
std::string Footballer::get_club() { return _club; }
int Footballer::get_goals() { return _goals; }
int Footballer::get_appearances() { return _appearances; }
std::string Footballer::get_position() {
  if (_position == Position::Goalkeeper) {
    return "Goalkeeper";
  } else if (_position == Position::Defender) {
    return "Defender";
  } else if (_position == Position::Midfielder) {
    return "Midfielder";
  } else {
    return "Forward";
  }
}
//methods
void Footballer::scored() { _goals++; }
void Footballer::played_game() { _appearances++; }

// get them to add a hat trick method