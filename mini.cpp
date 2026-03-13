#include <iostream>
/* A simgple number guessing game*/

int main() {
  int num;
  int guess;
  int tries;

  srand(time(NULL));
  num = (rand() % 100 )+ 1;
  std::cout << "****Welcome to the number guessing game***! \n";

  do {
    std::cout << "Enter a number between (1-100): \n";
    std::cin >> guess;
    tries++;

    if (guess > num) {
      std::cout << "Too high! Try again. \n";


    } else if (guess < num) {
      std::cout << "Too low! Try again. \n";

    } else {
      std::cout << "CORRECT!: # of tries: " << tries << '\n';
    }

  } while (guess != num);
  std::cout << "***Thanks for playing!*** \n";
  return 0;
}