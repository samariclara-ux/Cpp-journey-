#include <iostream>
/*
type conversion = the process of converting a value from one data type to another
implicit conversion = automatically performed by the compiler
explicit conversion = manually performed by the programmer
*/

int main() {
  int correct = 8;
  int questions = 10;
  double score = correct/(double)questions * 100; 
  std::cout << score << "%\n";
  return 0;
}