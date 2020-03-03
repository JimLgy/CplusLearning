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
  PizzaAnalysis * ps = new PizzaAnalysis;
  cout << "Enter the diameter of the pizza: ";
  (cin >> ps->diameter).get();
  cout << "Enter the name of the pizza company: ";
  cin.getline(ps->company, 20);
  cout << "Enter the weight of the pizza: ";
  cin >> ps->weight;

  cout << "Company: " << (*ps).company << endl;
  cout << "Diameter: " << (*ps).diameter << endl;
  cout << "Weight: " << (*ps).weight << endl;
  delete ps;
  return 0;
}
