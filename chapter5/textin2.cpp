// Listing 5.17 textin2.cpp -- using cin.get(char)
#include <iostream>
int main()
{
  using namespace std;
  char ch;
  int count = 0;            // use basic input
  cout << "Enter characters; enter # to quit:\n";
  cin.get(ch);
  while (ch != '#')
  {
    cout << ch;             // echo the character
    ++count;
    cin.get(ch);            // get the next character
  }
  cout << endl << count << " characters read\n";
  return 0;
}
