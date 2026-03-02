#include <iostream>

/*
typedef = reserves keyword use to creat an additon name (alias) for another data type
It helps with readability and reduces typos
it's used when they is a clear benefit
replacing it with 'using' works better with templates
*/

using text_t = std::string;
using number_t = int;

int main(){
  text_t name = "Ami";
  number_t age = 21;

  std::cout  << name << '\n';
  std::cout << age << '\n';

  return 0;
}