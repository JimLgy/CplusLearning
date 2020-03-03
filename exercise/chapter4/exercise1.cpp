#include <iostream>
int main()
{
  using namespace std;
  char firstName[20];
  char lastName[10];
  char grade;
  char finalGrade;
  int age;

  cout << "What is your first name? ";
  cin.getline(firstName, 20);
  cout << "What is your last name? ";
  cin.getline(lastName, 10);
  cout << "What letter grade do you deserve? ";
  cin >> grade;
  cout << "What is your age? ";
  cin >> age;

  finalGrade = grade + 1;
  cout << "Name: " << lastName << ", " << firstName << endl;
  cout << "Grade: " << finalGrade << endl;
  cout << "Age: " << age << endl;
  return 0;

}
