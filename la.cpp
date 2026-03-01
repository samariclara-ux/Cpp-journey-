#include  <iostream>
/*
Namespace= provides a solution for preventing name conflicts
In large projects, each entity needs a unique name.
A namespace allows for identical named entities as long as the namespaces are different.
*/

namespace first{
  int x = 10;
}
namespace second{
  int x = 20;
}
int main(){
  std::cout << "Value of x in first namespace: " << first::x << std::endl;
  std::cout << "Value of x in second namespace: " << second::x << std::endl;
  return 0;
}

