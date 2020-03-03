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
  CandyBar * snack = new CandyBar[3];

  // first CandyBar object
  strcpy(snack->brandName, "Mocha Munch");
  snack->weight = 2.3;
  snack->calories = 350;

  // second CandyBar object
  strcpy((snack+1)->brandName, "apple");
  (snack+1)->weight = 3.0;
  (snack+1)->calories = 400;

  // third CandyBar object
  strcpy((snack+2)->brandName, "pear");
  (snack+2)->weight = 4.5;
  (snack+2)->calories = 500;

  cout << "Snack 1 " << "\nName: " << (*snack).brandName
        << "\nWeight: " << (*snack).weight
        << "\nCalories: " << snack->calories << endl;

  cout << "Snack 2 " << "\nName: " << (snack+1)->brandName
        << "\nWeight: " << (snack+1)->weight
        << "\nCalories: " << (snack+1)->calories << endl;

  cout << "Snack 3 " << "\nName: " << (snack+2)->brandName
        << "\nWeight: " << (snack+2)->weight
        << "\nCalories: " << (snack+2)->calories << endl;
  delete [] snack;
  return 0;
}
