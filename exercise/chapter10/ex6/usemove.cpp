#include <iostream>
#include "move.h"

int main()
{
	using namespace std;
	Move m1 = {1.4, 2.8};
	Move m2 = {13.2, 22.3};
	cout << "Elements of Object m1:\n";
	m1.showmove();
	cout << "Elements of Object m2:\n";
	m2.showmove();
	Move m3 = m1.add(m2);
	cout << "Elements of Object m3:\n";
	m3.showmove();
	m1.reset(0,0);
	cout << "Elements of reseted Object m1:\n";
	m1.showmove();
	return 0;
}
