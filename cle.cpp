#include <iostream>
int main() {
  std:: string name;
  int age;

  std::cout << "what's your full name: ";
  std::getline(std::cin, name);

  std::cout << "what's your age: ";
  std::cin >> age;

  std::cout << "Hello " << name << '\n'; 
  std::cout << "you are " << age << " years old\n";
 
  return 0;
}
