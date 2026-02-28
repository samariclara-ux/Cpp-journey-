#include <iostream>
 
//introduction to c++ programming

int main() {
  int age = 22;
  int year = 2026;
  int days = 7;

  //double double numbers including decimals
  double price = 19.99;
  double gpa = 3.5;
  double temperature = 25.1;

  //single character
  char grade =   'A';
  char initial = 'C';
  char dollarSign = '$';

  //boolean values(true or false)
  bool isStudent = false;
  bool isAdult =   true;
  bool isHappy =  true;

  //string(object that represents a sequence of text)
  std::string name = "Clare";
  std::string city = "Cameroon";
  std::string hobby = "coding";
  std:: string favoriteFood = "Fried Rice";

  std::cout << "Hello, my name is " << name << " , I am from " << city << ".\n";
  std::cout << "I am " << age << " years old and I love " << hobby << ".\n";
  std::cout << "My favorite food is " << favoriteFood << ".\n";

    return 0;
}
