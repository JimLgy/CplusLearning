#include <iostream>
long double factorial(int num);
int main()
{
	using namespace std;
	cout << "Enter a number to calculate its factorial: ";
	int n;
	while (cin >> n)
	{
		if (n < 0)
			cout << "Error: negative number cannot be factorialized!\n";
		else 
			cout << n << "! is " << factorial(n) << endl;
		cout << "Enter another number or q to quit: ";
	}
	cout << "Done!\n";
	return 0;
}

long double factorial(int num)
{
	long double result = 1.0;
	if (0 == num)
		result = 1.0;
	else
	{
		for (int n = num; n > 0; n--)
			result = result * n;
	}
	return result;
}
