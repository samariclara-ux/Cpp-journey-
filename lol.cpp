#include <iostream>
int main() {
   char *pgrades = NULL;
   int size ;
   std::cout << "How many grades to enter in: ";
   std::cin >> size;

    pgrades = new char[size];
    for (int i = 0; i < size; i++) {
        std::cout << "Enter grade #" << i + 1 << ": ";
        std::cin >> pgrades[i];
    }

    for(int i = 0; i < size; i++) {
        std::cout <<  pgrades[i] << " ";
    }

    delete[] pgrades;

    return 0;
}