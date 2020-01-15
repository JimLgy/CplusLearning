// hexoct2.cpp -- shows hex and octal literals
#include <iostream>
int main()
{
	using namespace std;
	int chest = 42;
	int waist = 42;
	int inseam = 42;

	cout << "Monsieur cuts a striking figure!\n";
	cout << "chest = " << chest << " (42 in decimal)" << endl;
	cout << hex;			// manipulator for changing number base
	cout << "waist = " << waist << " (0x42 in hex)" << endl;
	cout << oct;

	cout << "inseam = " << inseam << " (042 in octal)" << endl;
	return 0;
}
