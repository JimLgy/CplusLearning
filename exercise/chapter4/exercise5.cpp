#include <iostream>
struct CandyBar
{
  char brandName[20];
  float weight;
  int calories;
};

int main()
{
  using namespace std;
  CandyBar snack =
  {
    "Mocha Munch",
    2.3,
    350
  };

  cout << "Snack Name: " << snack.brandName << endl;
  cout << "Snack Weight: " << snack.weight << endl;
  cout << "Snack Calories: " << snack.calories << endl;

  return 0;
}
