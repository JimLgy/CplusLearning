#include <iostream>
#include <string>
const int Seasons = 4;
const char* Sname[Seasons] = {"Spring", "Summer", "Fall", "Winter"};

void fill(double expense[]);
void show(double da[]);

int main()
{
	double expense[Seasons];
	fill(expense);
	show(expense);
	return 0;
}

void fill(double expense[])
{
	using namespace std;
	for (int i = 0; i < Seasons; i++)
	{
		cout << "Enter " << *(Sname + i) << " expenses: ";
		cin >> expense[i]; 
	}
}

void show(double da[])
{
	using namespace std;
	double total = 0.0;
	cout << "\nEXPENSES\n";
	for (int i = 0; i < Seasons; i++)
	{
		cout << *(Sname+i) << ": $" << da[i] << endl;
		total += da[i];
	}
	cout << "Total Expenses: $" << total << endl;
}
