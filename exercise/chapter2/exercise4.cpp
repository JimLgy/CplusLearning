//Exercise 4: Write a program that asks the user to enter his or her age. The program should display the age in months:
// 	Enter your age: 29
// 	Your age in months is 348

#include <iostream>
#include <cmath>
int main()
{
	using namespace std;
	int age_year;
	int age_month;
	cout << "Enter your age: ";
	cin >> age_year;
	age_month = age_year * 12;
	cout << "Your age in months is " << age_month << "." << endl;
	return 0;
}
