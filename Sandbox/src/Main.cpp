#include <string>
#include <iostream>

#include "PassBy.h"
#include "EnumTest.h"

int main() {
  std::string name = "Chris";
  std::cout << "Memory address of name: " << &name << std::endl;
  std::cout << name << std::endl;

  PassBy passBy;
  passBy.ref(name);
  std::cout << name << std::endl;
  passBy.val(name);
  std::cout << name << std::endl;
  passBy.ptr(&name);
  std::cout << name << std::endl;

  std::cout << std::endl << "======================================" << std::endl << std::endl;

  EnumTest enumTest;
  std::cout << "EnumTest::Level::One    " << (int)EnumTest::Level::One << std::endl;
  enumTest.setLevel(EnumTest::Level::Two);
  std::cout << "EnumTest::Level::Two    " << (int)enumTest.getLevel() << std::endl;
  enumTest.setLevel();
  std::cout << "EnumTest::Level::Three  " << (int)enumTest.getLevel() << std::endl;

  std::cout << "Food::Level::Apples     " << (int)EnumTest::Food::Apples << std::endl;
  enumTest.setFood(EnumTest::Food::Potatoes);
  std::cout << "Food::Level::Potatoes   " << (int)enumTest.getFood() << std::endl;
  enumTest.setFood();
  std::cout << "Food::Level::Carrots    " << (int)enumTest.getFood() << std::endl;

  std::cin.get();
  return 0;
}
