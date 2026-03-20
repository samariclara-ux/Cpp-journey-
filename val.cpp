#include <iostream>

int main() {
  // an array of students' names

  std::string students[] = {"Clare", "Amie", "Ornela", "Glanche", "Lilian",        
                                   "Maggie", "Diana", "Sophie", "Vald"};

  for (int i = 0; i< sizeof(students)/sizeof(students[0]); i++) {
    std::cout << students[i] << '\n';
  }
  return 0;
}