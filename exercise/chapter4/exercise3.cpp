#include <iostream>
#include <cstring>
int main()
{
  using namespace std;
  char firstName[10];
  char lastName[10];
  char output[25];

  cout << "Enter your first name: ";
  cin.getline(firstName, 10);
  cout << "Enter your last name: ";
  cin.getline(lastName, 10);

  strcpy(output, lastName);
  strcat(output, ", ");
  strcat(output, firstName);
  cout << "Here's the information in a single string: " << output << endl;
  return 0;
}
