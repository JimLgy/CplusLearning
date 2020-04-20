// exercise1.cpp
#include <iostream>
#include "golf.h"

int main()
{
	using namespace std;
	golf ag[5];
	setgolf(ag[0], "Ann Birdfree", 24);
	int n = 1, result = 1;
	while (n < 5 && result == 1)
	{
		result = setgolf(ag[n]);
		if (result == 0)
			break;
		else
			n++;
	}
	cout << endl;
	for (int i = 0; i < n; i++)
		showgolf(ag[i]);
	return 0;
}
