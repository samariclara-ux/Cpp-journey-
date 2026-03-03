# Day 18: C++ Month Converter 📅

Part of my #100DaysOfCode journey. This project demonstrates the use of control flow in C++ specifically focusing on the switch statement.

## How it Works
The program prompts the user to enter a number between 1 and 12. Using a switch case logic, it identifies and prints the corresponding month. It also handles invalid inputs using a default case.

### Key Concepts Covered:
* User Input with std::cin
* Flow control with switch, case, and break
* Basic error handling with default

## Code Snippet
```cpp
switch (month) {
    case 1: std::cout << "It is January."; break;
    // ... handles all 12 months
    default: std::cout << "Please enter only numbers (1-12)!";
}