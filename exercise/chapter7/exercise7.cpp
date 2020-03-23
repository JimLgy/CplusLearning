// Listing 7.7 arrfun3.cpp -- array functions and const
#include <iostream>
const int Max = 5;
double * fill_array(double * begin, double * end);
void show_array(const double * begin, const double * end);
void revalue(double r, double * begin, double * end);

int main()
{
	using namespace std;
	double ar[Max];

	double * arEnd;
	arEnd = fill_array(ar, ar+Max);
	show_array(ar, arEnd);
	if (arEnd != ar)
	{
		cout << "Enter revaluation factor: ";
		double factor;
		while (!(cin >> factor))
		{
			cin.clear();
			while (cin.get() != '\n')
				continue;
			cout << "Bad input; Please enter a number: ";
		}
		revalue(factor, ar, arEnd);
		show_array(ar, arEnd);
	}
	cout << "Done.\n";
	// cin.get();
	// cin.get();
	return 0;
}

double * fill_array(double * begin, double * end)
{
	using namespace std;
	double temp;
	int i;
	for (i = 0; begin+i < end; i++)
	{
		cout << "Enter value #" << (i+1) << ": ";
		cin >> temp;
		if (!cin)
		{
			cin.clear();
			while (cin.get() != '\n')
				continue;
			cout << "Bad input; input process terminated.\n";
			break;
		}
		else if (temp < 0)
			break;
		*(begin+i) = temp;
	}
	return (begin+i);
}

void show_array(const double * begin, const double * end)
{
	using namespace std;
	for (int i = 0; (begin+i) < end; i++)
	{
		cout << "Property #" << (i+1) << ": $";
		cout << *(begin+i) << endl;
	}
}

void revalue(double r, double * begin, double * end)
{
	for (int i = 0; (begin+i) < end; i++)
		*(begin + i) *= r;
}




























