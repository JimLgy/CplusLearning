#include <iostream>

double harmean(double x, double y);

int main()
{
	using namespace std;
	double p1, p2, mean;
	cout << "Enter a pair of values x, y (Enter 0 to quit): ";
	cin >> p1 >> p2;
	while (p1 != 0 && p2 != 0)
	{
		mean = harmean(p1, p2);
		cout << "The harmonic mean is: " << mean << endl;
		cout << "Enter another pair of values x, y (0 to quit): ";
		cin >> p1 >> p2;
	}
	cout << "Done!\n";
	return 0;
}

double harmean(double x, double y)
{
	double mean = 2.0 * x * y / (x + y);
	return mean;
}
