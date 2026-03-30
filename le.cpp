#include <iostream>
#include <string>

int main()
{
  std::string flowers[3][3] = {
      {"Rose", "Tulip", "Lily"},
      {"Daisy", "Sunflower", "Orchid"},
      {"Peony", "Carnation", "Chrysanthemum"}};

  int rows = sizeof(flowers) / sizeof(flowers[0]);
  int columns = sizeof(flowers[0]) / sizeof(flowers[0][0]);

  for (int i = 0; i < rows; i++)
  {
    for (int j = 0; j < columns; j++)
    {
      std::cout << flowers[i][j] << '\n';
    }
    std::cout << '\n';
  }
  return 0;
}