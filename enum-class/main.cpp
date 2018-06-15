#include <iostream>

enum class Vegetable { POTATO, CARROT, ONION };
enum class Fruit { APPLE, BANANA, PEAR };

int main() {
  // create enum types and assign values (both are 0)
  Vegetable veg = Vegetable::POTATO;
  Fruit fruit = Fruit::APPLE;
    // this will cause a compile error
  if ( fruit == veg) {
    std::cout << "The types are the same!\n";
  }  
  return 0;
}