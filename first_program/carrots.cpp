// carrots.cpp -- food processing program
// uses and displays a variable

#include <iostream>

int main()
{
	using namespace std;

	int carrots;		// declare an integer variable

	carrots = 25;
	cout << "I have ";
	cout << carrots;	//display the value of the variable
	cout << "carrtos.";
	cout << endl;
	carrots = carrots - 1;
	cout << "Crunch, crunch. Now I have " << carrots << " carrots." << endl;
	return 0;


}
