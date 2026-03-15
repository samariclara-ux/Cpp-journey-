#include <iostream>

/*Function = A block of reusable code*/

void happyBirthday(std::string name, int age);
   
int main() {
  int age = 21;
  std::string name = "Clare";
  happyBirthday(name, age);
  return 0;
}
void happyBirthday(std:: string name, int age) {
  std::cout << "Happy Birthday to " << name << "! " << '\n';
  std::cout << "Happy Birthday to " << name << '\n';
  std::cout << "Happy Birthday dear " << name << '\n';
  std::cout << "Happy Birthday to " << name << '\n';
  std::cout << "You are " << age << " years old!" << '\n';
}