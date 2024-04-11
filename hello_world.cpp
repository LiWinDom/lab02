// "Including libraries"
#include <string>
#include <iostream>

int main() {
  // Asing name
  std::cout << "What is your name? ";
  std::string name;
  std::cin >> name;

  // Printing result
  std::cout << "Hello world from " << name;
}
