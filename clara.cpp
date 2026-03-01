#include <iostream>

/** The const keyword specifies that the variable value is constant,
 * tells the compiler to prevent anything from modifying it(read-only)**/ 
int main() {
  const double PI = 3.14159;
  const int LIGHT_SPEED = 299792458;
  const int WIDTH = 1920;
  const int HEIGHT = 1080;

  std::cout << "The value of PI is: " << PI << std::endl;
  std::cout << "The speed of light is: " << LIGHT_SPEED << " m/s" << std::endl;
  std::cout << "Screen resolution: " << WIDTH << "x" << HEIGHT << std::endl;
  return 0;
}