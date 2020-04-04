#include <iostream>
using namespace std;
#include <cstring>
struct stringy{
	char * str;		// points to a string
	int ct; 		// length of string (not counting '\0')
};

void set(stringy &, const char str[]);
void show(const stringy &, int n = 1);
void show(const char str[], int n = 1);

int main()
{
	stringy beany;
	char testing[] = "Reality isn't what it used to be.";

	set(beany, testing);
	show(beany);
	show(beany, 2);
	testing[0] = 'D';
	testing[1] = 'u';
	show(testing);
	show(testing, 3);
	show("Done!");
	return 0;
}

void set(stringy & st1, const char str[])
{
	int size = strlen(str);
	st1.str = new char [size];
	strcpy(st1.str, str);
	st1.ct = size;
}

void show(const stringy & st1, int n)
{
	for (int i = 0; i < n; i++)
		cout << st1.str << endl;
}

void show(const char str[],int n)
{
	for (int i = 0; i < n; i++)
		cout << str << endl;
}
