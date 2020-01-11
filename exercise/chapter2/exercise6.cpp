//Exercise 6: Write a program that has main() call a user-defined function that takes a distance in light years as an argument and then returns the distance in astronomical units. The program should request the light year value as input from the user and display the result, as shown in the following code:
//	Enter the number of light years: 4.2
//	4.2 light years = 265608 astronomical units.

#include <iostream>
#include <cmath>

double lytoasunits(double n);

int main()
{
	using namespace std;
	double light_year;
	double asunits;
	cout << "Enter teh number of light years: ";
	cin >> light_year;
	asunits = lytoasunits(light_year);
	cout << light_year << "light years = " << asunits 
		<< " astronomical units." << endl;
	return 0;
}

double lytoasunits(double n)
{
	using namespace std;
	double output;
	output = n * 63240;
	return output;
}
