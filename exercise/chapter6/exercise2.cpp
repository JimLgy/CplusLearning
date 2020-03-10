#include <iostream>
#include <array>
const int Max = 10;
int main()
{
  using namespace std;
  array<double, Max> donation;

  cout << "Enter donation #1: ";
  int i = 0;
  while (i < Max && cin >> donation[i])
    if (++i < Max)
      cout << "Enter donation #" << i+1 << ": ";

  double total = 0.0;
  for (int j = 0; j < i; ++j)
  {
    cout << donation[j] <<endl;
    total += donation[j];
  }
    // total += donation[j];

  double average = total / i;

  int count = 0;
  for (int j = 0; j <= i; ++j)
    if (donation[j] > average)
      count++;

  cout << "You have donate " << i << " times\n";
  cout << "Total donation is: " << total << endl;
  cout << "There are " << count << " donations larger than the average value "
        << average << ".\n";
  return 0;
}
