#include <iostream>
#include <ctime>

/*this program simulates a simple lottery game where the user wins a prize 
                 based on a random number generated between 1 and 5.
*/ 

int main() {
   srand(time(0));
   int randNum = rand() % 5+ 1; 
  
   switch(randNum) {
      case 1:
         std::cout << "YOu win a bumber sticker! \n";
         break;
      case 2:
         std::cout << "You win a beautiful gown!\n";
         break;
      case 3:
         std::cout << "You win a free lunch!\n";
         break;
      case 4:
         std::cout << "You win a gift card!\n";
         break;
      case 5:
         std::cout << "You win a concert ticket!\n";
         break;
   }
   return 0;
}