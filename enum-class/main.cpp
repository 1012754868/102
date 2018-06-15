#include <iostream>

enum class Vegetable { Potato, Carrot, Onion };
enum class Fruit { Apple, Banana, Pear };

int main() {
  // create enum class types 
  Vegetable veg = Vegetable::Potato;
  Fruit fruit = Fruit::Apple;

  // this would cause a compile error as the types are now different
  //if (fruit == veg) {
  //  std::cout << "The types are the same!\n";
  //}  

  if (fruit == Fruit::Apple) {
    std::cout << "The fruit is an apple.\n";
  } else if (fruit == Fruit::Banana) {
    std::cout << "The fruit is a banana.\n";
  } else if (fruit == Fruit::Pear) {
    std::cout << "The fruit is a pear.\n";
  } 

  return 0;
}