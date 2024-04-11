#include <string>
#include <iostream>

int main(int argc, char *argv[]) {
  std::cout << "What is your name? ";
  std::string name;
  std::cin >> name;

  std::cout << "Hello world from " << name;
}
