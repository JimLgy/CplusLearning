#include <iostream>
#include <array>
int main()
{
  using namespace std;

  array<float, 3> length;
  cout << "Enter your 1st time: ";
  cin >> length[0];
  cout << "Enter your 2nd time: ";
  cin >> length[1];
  cout << "Enter your 3rd time: ";
  cin >> length[2];

  cout << "1st time your entered: " << length[0] << endl;
  cout << "2nd time your entered: " << length[1] << endl;
  cout << "3rd time your entered: " << length[2] << endl;

  cout << "Average time is = " << (length[0] + length[1] + length[2])/3 << endl;
  return 0;
}
