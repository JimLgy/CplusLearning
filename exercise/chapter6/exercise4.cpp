#include <iostream>
using namespace std;
void showmenu();
const int strsize = 20;
const int listLengh = 5;
struct bop{
  char fullname[strsize];      // real name
  char title[strsize];         // job title
  char bopname[strsize];       // secret BOP name
  int preference;         // 0 = fullname, 1 = title, 2 = bopname
};
int main()
{
  bop member[listLengh] =
  {
    {"Wimp Macho", "President", "PWM", 1},
    {"Raki Rhodes", "Headmaster", "HRR", 0},
    {"Celia Laiter", "Lecturer", "LCL", 2},
    {"Hoppy Hipman", "Reader", "RHH", 1},
    {"Pat Hand", "Technician", "TPH", 2}
  };
  showmenu();

  char choice;
  cout << "Enter your choice: ";
  cin >> choice;
  while (choice != 'q')
  {
    switch(choice)
    {
      case 'a':
      {
        for (int i = 0; i < listLengh; ++i)
          cout << member[i].fullname << endl;
        break;
      }

      case 'b':
      {
        for (int i = 0; i < listLengh; ++i)
          cout << member[i].title << endl;
        break;
      }

      case 'c':
      {
        for (int i = 0; i < listLengh; ++i)
          cout << member[i].bopname << endl;
        break;
      }
      case 'd':
      {
        for (int i = 0; i < listLengh; ++i)
        {
          if (member[i].preference == 0)
            cout << member[i].fullname << endl;
          else if (member[i].preference == 1)
            cout << member[i].title << endl;
          else
            cout << member[i].bopname << endl;
        }
        break;
      }
    }
    cout << "Next choice: ";
    cin >> choice;
  }
  cout << "Bye!" << endl;
  return 0;
}

void showmenu()
{
  cout << "Benevolent Order of Programmers Report\n"
        << "a. display by name\t\t b. display by title\n"
        << "c. display by bopname\t\t d. display by preference\n"
        << "q. quit\n";
}
