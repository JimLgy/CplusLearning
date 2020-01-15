// write a program that asks the user to enter a latitude in degrees, minutes, and seconds and that then displays the 
// latitude in decimal format.
#include <iostream>
int main()
{
	using namespace std;
	int degree;
	int minute;
	int second;
	float decimal;
	const int min2deg = 60;
	const int sec2min = 60;

	cout << "Enter a latitude in degrees, minutes, and seconds:" << endl;
	cout << "First, enter the degrees: ";
	cin >> degree;
	cout << "Next, enter the minutes of arc: ";
	cin >> minute;
	cout << "Finally, enter the second of arc: ";
	cin >> second;

	decimal = degree + (float(minute) + float(second) / sec2min) / min2deg;
	cout << degree << " degrees, " << minute << " minutes, "
		<< second << " seconds = " << decimal << " degrees." << endl;
	return 0;
}
