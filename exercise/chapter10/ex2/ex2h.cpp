#include <iostream>
#include <cstring>

#include "ex2.h"

Person::Person(const std::string & ln, const char * fn)
{
	lname = ln;
	int i = 0;
	while (*fn)
	{
		fname[i] = *fn;
		i++;
		fn++;
	}
}

	
void Person::Show() const
{
	using std::cout;
	using std::endl;
	for (int i = 0; i < std::strlen(fname); i++)
		cout << fname[i];
	cout << " " << lname << endl;
}

void Person::FormalShow() const
{
	using std::cout;
	using std::endl;
	using std::strlen;
	cout << lname << ", ";
	for (int i = 0; i < std::strlen(fname); i++)
		cout << fname[i];
	cout << endl;
}
