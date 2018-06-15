#include <iostream>

// constants in the list are assigned integers: 0,1,2 etc. 
enum Vegetable { POTATO, CARROT, ONION };
enum Fruit { APPLE, BANANA, PEAR };

int main() {
  // create enum types and assign values (both are 0)
  Vegetable veg = POTATO;
  Fruit fruit = APPLE;
  if ( fruit == veg) {
    std::cout << "The types are the same!\n";
  }
  return 0;
}