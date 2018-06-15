#include <iostream>
#include "Footballer.h"
#include "Person.h"

int main() {
  // create a 'default' Person object and set (mutate) some properties
  Person my_friend;
  my_friend.set_forename("Bruce");
  my_friend.set_surname("Wayne");
  my_friend.set_dob({25, Month::Dec, 1975});
  // then use the accessors to print the details
  std::cout << "My best friend is called " << my_friend.get_forename() << " "
            << my_friend.get_surname() << ", who was born on "
            << my_friend.get_dob() << ".\n";

  // now use contructor arguments to create another person with specific values
  Person my_other_friend = {"Peter", "Rabbit", {30, Month::May, 2000}};
  std::cout << "My other friend is called " << my_other_friend.get_forename()
            << " " << my_other_friend.get_surname() << " and they were born on "
            << my_other_friend.get_dob() << ".\n";

  // Create a specific footballer
  Footballer my_fav_player = {
      "Wayne", "Rooney", {24, Month::Oct, 1985}, Position::Forward, 119, 53};
  
  std::cout << "My favourite footballer is " << my_fav_player.get_forename() << " " 
            <<  my_fav_player.get_surname() << ". He has scored " << my_fav_player.get_goals()
            << " goals in " << my_fav_player.get_appearances() << " appearances.\n";
    
  my_fav_player.played_game();
  my_fav_player.scored();

  std::cout << "He has now scored " << my_fav_player.get_goals()
            << " goals in " << my_fav_player.get_appearances() << " appearances.\n";

  return 0;
}