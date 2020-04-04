#include <iostream>
#include <cstring>
const int ArSize = 30;
struct CandyBar
{
	char name[ArSize];
	double weight;
	int calories;
};

void setCandyBar(CandyBar &, const char * str = "Millennium Munch", double
		weight = 2.85, int heat = 350);
void show(const CandyBar &);

int main()
{
	using namespace std;
	CandyBar bar1;
	char brand[ArSize] = "Jim Liu";
	const char * ptc = brand;
	double w = 5.85;
	int c = 850;

	// show default bar1
	setCandyBar(bar1);
	cout << "The default setting:\n";
	show(bar1);

	// fill struct
	setCandyBar(bar1, ptc, w, c);
	cout << "The new setting:\n";
	show(bar1);
	return 0;
}


void setCandyBar(CandyBar & cb, const char * str, double weight, int heat)
{
	strcpy(cb.name, str);
	cb.weight = weight;
	cb.calories = heat;
}

void show(const CandyBar & cb)
{
	using namespace std;
	cout << "Brand Name: " << cb.name << endl;
	cout << "Weight: " << cb.weight << endl;
	cout << "Calories: " << cb.calories << endl;
}
