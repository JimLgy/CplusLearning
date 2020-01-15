// exercise 1 -- Write a short program that asks for your height in integer inches and then converts your height to feet and inches. Have the program use the underscore character to indicate where to type the response. 
// Also use a const symbolic constant to represent the conversion factor.
#include <iostream>
int main()
{
	using namespace std;
	const int factor = 12;
	int h_inch;
	int h_feet;
	int h_input;

	cout << "Enter your height in inches: ";
	cin >> h_input;
	h_feet = h_input / factor;
	h_inch = h_input % factor;
	cout << "Your height is " << h_feet << " ft and " << h_inch << " inches"
		<< endl;
	return 0;
}
