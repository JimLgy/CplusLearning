//Exercise 2: Write a C++ program that asks for a distrance in furlongs and converts it to yards.

#include <iostream>
#include <cmath>

int main()
{
	using namespace std;
	double furlong;
	double yards;
	cout << "Enter a distance in furlongs: ";
	cin >> furlong;
	yards = furlong/220;
	cout << furlong << " furlong = " << yards << " yards." << endl;
	return 0;
}
