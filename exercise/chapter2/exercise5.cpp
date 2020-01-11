//Exercise 5: Write a program that has main() call a user-defined function that takes a Celsius temperature value as an argument and then returns the equivalent Fahrenheit value.

#include <iostream>
#include <cmath>

int main()
{
	using namespace std;
	double temp_c;
	double temp_f;
	cout << "Please Enter a Celsius value: ";
	cin >> temp_c;
	temp_f = temp_c * 1.8 + 32.0;
	cout << temp_c << " degrees Celsius is " << temp_f 
		<< " degrees Fahrenheit." << endl;
	return 0;
}
