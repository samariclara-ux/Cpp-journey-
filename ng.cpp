#include <iostream>
int main()
{

  // Rock, paper, scisors game

  std::cout << "Welcome to Rock, Paper, Scissors!" << '\n';
  std::cout << "Enter your choice (rock, paper, scissors): ";
  std::string userChoice;
  std::cin >> userChoice;
  std::string computerChoice;
  int randomNum = rand() % 3; // Generate a random number between 0 and 2
  if (randomNum == 0)
  {
    computerChoice = "rock";
  }
  else if (randomNum == 1)
  {
    computerChoice = "paper";
  }
  else
  {
    computerChoice = "scissors";
  }
  std::cout << "Computer chose: " << computerChoice << '\n';
  if (userChoice == computerChoice)
  {
    std::cout << "It's a tie!" << '\n';
  }
  else if ((userChoice == "rock" && computerChoice == "scissors") ||
           (userChoice == "paper" && computerChoice == "rock") ||
           (userChoice == "scissors" && computerChoice == "paper"))
  {
    std::cout << "You win!" << '\n';
  }
  else
  {
    std::cout << "Computer wins!" << '\n';
  }

  return 0;
}