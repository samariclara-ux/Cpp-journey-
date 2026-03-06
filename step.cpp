#include <iostream>

int main() {
  
  int temp;
  bool sunny = false;

  std::cout <<"Enter the temperature: ";
  std::cin >> temp;

  if (temp <= 0 || temp >= 30) {
    std::cout <<"The temperature is bad.\n";
  }
   else {
    std::cout <<"The temperature is good.\n";
   }
     if (sunny) {
      std::cout <<"It' cloudy outside.\n";
      } 
      else {
        std::cout <<"It is sunny outside.\n";
      }
  
  return 0;
}
