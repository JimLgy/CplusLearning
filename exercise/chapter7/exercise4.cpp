#include <iostream>
long double probability(unsigned numbers,unsigned meganumbers, unsigned picks, unsigned mega);
int main()
{
	using namespace std;
	double totalpicks, totalmega, choices;
	cout << "Enter the total number of choices on the game card," 
		" the total number of mega numbers of the game, "
		"and the number of picks allowed: \n";
	int powerball = 1;
	while(cin >> totalpicks >> totalmega >> choices && choices <= totalpicks)
	{
		cout << "You have one chance in ";
		cout << probability(totalpicks, totalmega, choices, powerball);
		cout << " of winning.\n";
		cout << "Next three numbers (q to quit): ";
	}
	cout << "Bye!\n";
	return 0;
}

long double probability(unsigned numbers, unsigned meganumbers, unsigned picks, unsigned mega)
{
	long double picksprob = 1.0;
	long double n;
	unsigned p;
	for (n = numbers, p = picks; p > 0; n--, p--)	
	{
		picksprob =  picksprob * numbers / n; 
	}
	double chance = picksprob * 1 / meganumbers;
	return chance;
}
