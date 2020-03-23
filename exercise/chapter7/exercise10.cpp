#include <iostream>
double add(double x, double y);
double subtract(double x, double y);
double calculate(double x, double y, double (*pf)(double a, double b));

int main()
{
	using namespace std;
	double x, y, result;
	cout << "Enter two numbers x and y: ";
	while (cin >> x >> y)
	{
		cout << "The sum of " << x << " and " << y << "= ";
		cout << calculate(x, y, add) << endl;
		cout << "The subtraction of " << x << " and " << y <<"= "
			<<calculate(x, y, subtract) << endl;
		cout << "Enter next two numbers: (q to quit)";
	}
	cout << "Done.\n";
	return 0;
}

double add(double x, double y)
{
	return x + y;
}

double subtract(double x, double y)
{
	return x - y;
}

double calculate(double x, double y, double (*pf)(double a, double b))
{
	double result;
	result = (*pf)(x, y);
	return result;
}
