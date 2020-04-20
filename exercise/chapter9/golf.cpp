// golf.cpp -- for exercise1.cpp
#include <iostream>
#include "golf.h"
#include <cstring>

void setgolf(golf & g, const char * name, int hc)
{
	strcpy(g.fullname, (char *)name);
	g.handicap = hc;
}

int setgolf(golf & g)
{
	using namespace std;
	char name[Len];
	int hc;
	int result = 1;
	cout << "Enter fullname: ";
	cin.getline(name, Len);
	if (strlen(name) == 0)
	{
		result = 0;
		cout << "Input Process terminated.\n";
	}
	else
	{
		result = 1;
		cout << "Enter handicap: ";
		cin >> hc;
		cin.ignore();
		strcpy(g.fullname, name);
		g.handicap = hc;
	}	
	return result;
}

void showgolf(const golf & g)
{
	using namespace std;
	cout << "Fullname: " << g.fullname << endl;
	cout << "Handicap: " << g.handicap << endl;
}
