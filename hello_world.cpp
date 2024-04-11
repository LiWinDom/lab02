#include <string>
#include <iostream>

int main() {
  std::cout << "What is your name? ";
  std::string name;
  std::cin >> name;
  std::cout << "Hello world from " << name;
}
