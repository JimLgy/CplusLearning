#include <iostream>
#include <string>
int main()
{
  using namespace std;
  string firstName;
  string lastName;
  string output;

  cout << "Enter your first name: ";
  getline(cin, firstName);
  cout << "Enter your last name: ";
  getline(cin, lastName);

  output = lastName + ", " + firstName;
  cout << "Here's the information in a single string: " << output << endl;
  return 0;
}
