//Copyright 2024 Trifonov Ivan fncps777@gmail.com

#include <iostream>
#include <string>

int main() {
  std::cout << "Enter your username:" << std::endl;
  std::string username;
  std::getline(std::cin, username);
  std::cout << "Hello, world from " << username << std::endl;
  return 0;
}
