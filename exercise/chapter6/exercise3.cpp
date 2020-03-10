#include <iostream>
using namespace std;
void showmenu();
int main()
{
  char choice;
  showmenu();
  cin >> choice;
  while(choice != 'c' && choice != 'p' && choice != 't' && choice != 'g')
  {
    cout << "Please enter a c, p, t, or g: ";
    cin >> choice;
  }
  switch(choice)
  {
    case 'c'  :  cout << "A maple is a carnivore.\n";
      break;
    case 'p'  :  cout << "A maple is a pianist.\n";
      break;
    case 't'  :  cout << "A maple is a tree.\n";
      break;
    case 'g'  :  cout << "A maple is a game.\n";
  }
  return 0;
}

void showmenu()
{
  cout << "Please enter one of the following choices: \n"
        <<"c) carnivore               p) pianist\n"
        <<"t) tree                    g) game\n";
}
