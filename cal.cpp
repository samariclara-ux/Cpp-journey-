#include <iostream>

int main() {
  char op;
  double num1;
  double num2;
  double result;

  std::cout <<"**** Simple Calculator ****\n";
 
  std::cout <<"Enter an operator (+, -, *, /): ";
  std::cin >> op;

  std::cout <<"Enter #num1: ";
  std::cin >> num1;

  std::cout <<"Enter #num2: ";
  std::cin >> num2;

  switch(op) {
    case '+':
      result = num1 + num2;
      std::cout <<"Result: " << result << '\n';
      break;
    case '-':
      result = num1 - num2;
      std::cout <<"Result: " << result << '\n';
      break;
    case '*':
      result = num1 * num2;
      std::cout <<"Result: " << result << '\n';
      break;
    case '/':
      result = num1 / num2;
      std::cout <<"Result: " << result << '\n';
      break;
    default:
      std::cout <<"That wasn't a valid operator.\n";
    break;
  }

  std::cout <<"******************************************\n";

  return 0;
}