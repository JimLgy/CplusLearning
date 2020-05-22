#include <iostream>
#include <cstring>
#include "golf.h"

golf::golf(const char * ch, int n)
{
	int i = 0;
	while (*ch)
	{
		fullname[i] = *ch;
		i++;
		ch++;
	}
	handicap = n;
}

golf & golf::setgolf()
{
	using std::cout;
	using std::cin;
	using std::endl;
	using std::strlen;
	char name[Len];
	cout << "Enter the Fullname: ";
	cin.getline(name, Len);
	if (strlen(name) == 0)
	{
		golf temp;
		*this = temp;
		return *this;
	}
	else
	{
		cout << "Enter the Handicap: ";
		cin >> handicap;
		golf temp = {name, handicap};
		*this = temp;
		return *this;
	}
}

void golf::resethc(int hc)
{
	handicap = hc;
}

void golf::showgolf() const
{
	using std::cout;
	using std::endl;
	using std::strlen;
	cout << "Fullname is ";
	for (int i = 0; i < strlen(fullname); i++)
		cout << fullname[i];
	cout << endl;
	cout << "Handicap is " << handicap << endl;;
}
