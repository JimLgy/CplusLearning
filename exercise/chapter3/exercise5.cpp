// exercise 5 -- write a program that requests the user to enter the current world population and the current population of the U.S.
// Store the information in variables of type long long. Have the program display the percent that U.S. population is of the world's
// population.
#include <iostream>
int main()
{
	using namespace std;
	long long p_world;
	long long p_nation;
	float percent;

	cout << "Enter the world's population: ";
	cin >> p_world;
	cout << "Enter the population of the nation: ";
	cin >> p_nation;

	percent = float(p_nation) / float(p_world) * 100;
	cout << "The population of the nation is " << percent
		 << "% of the world population." << endl;
	return 0;
}
