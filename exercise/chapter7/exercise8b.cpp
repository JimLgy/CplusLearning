#include <iostream>
#include <string>

const int Seasons = 4;
const char* Sname[Seasons] = {"Spring", "Summer", "Fall", "Winter"};
struct stru
{
	double expenses[Seasons];
};

void fill(double x[]);
void show(double x[]);

int main()
{
	stru exp_report;
	fill(exp_report.expenses);
	show(exp_report.expenses);
	return 0;
}

void fill(double x[])
{
	using namespace std;
	for (int i = 0; i < Seasons; i++)
	{
		cout << "Enter " << *(Sname+i) << " expenses: ";
		cin >> x[i];
	}
}

void show(double x[])
{
	using namespace std;
	double total = 0.0;
	cout << "\nEXPENSE\n";
	for (int i = 0; i < Seasons; i++)
	{
		cout << *(Sname+i) << ": $" << x[i] << endl;
		total += x[i];
	}
	cout << "Total Expenses: $" << total << endl;
}
