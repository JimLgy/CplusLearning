#include <iostream>
struct PizzaAnalysis
{
  char company[20];
  float diameter;
  float weight;
};

int main()
{
  using namespace std;
  PizzaAnalysis pizza;

  cout << "Enter the name of the pizza company: ";
  cin.getline(pizza.company, 20);
  cout << "Enter the diameter of the pizza: ";
  cin >> pizza.diameter;
  cout << "Enter the weight of the pizza: ";
  cin >> pizza.weight;

  cout << "Company: " << pizza.company << endl;
  cout << "Diameter: " << pizza.diameter << endl;
  cout << "Weight: " << pizza.weight << endl;

  return 0;
}
