#include <iostream>
// how to search an array for an element and return its index

int searchArray(std::string array[], int size, std::string element);

int main()
{
  std::string food[] = {"Chicken", "Beef", "Pork", "Fish", "Vegetables"};
  int size = sizeof(food) / sizeof(food[0]);
  int index;

  std::string myFood;
  std::cout << "Enter element to search for: " << '\n';
  std::getline(std::cin, myFood);

  index = searchArray(food, size, myFood);
  if (index != -1)
  {
    std::cout << "My food is at index: " << index << '\n';
  }
  else
  {
    std::cout << "My food is not in the array." << '\n';
  }
  return 0;
}

int searchArray(std::string array[], int size, std::string element)
{
  for (int i = 0; i < size; i++)
  {
    if (array[i] == element)
    {
      return i;
    }
  }
  return -1;
}
