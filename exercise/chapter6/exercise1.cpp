#include <iostream>
#include <cctype>
int main()
{
  using namespace std;
  char ch;

  cout << "Please give input: ";
  cin.get(ch);
  while (cin.good() && ch != '@')
  {
    if (!isdigit(ch))
    {
      if (islower(ch))
        cout << char(toupper(ch));
      else if (isupper(ch))
        cout << char(tolower(ch));
      else
        cout << ch;
    }
    cin.get(ch);
  }
  return 0;
}
