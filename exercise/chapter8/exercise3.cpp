#include <iostream>
#include <string>
#include <cctype>

using namespace std;
void upper(string & str);

int main()
{
	cout << "Enter a string (q to quit): ";
	string input;
	getline(cin,input);
	while (input[0] != 'q' || input.length() > 1)
	{
		upper(input);
		cout << "Enter a string (q to quit): ";
		getline(cin,input);
	}
	cout << "Bye!\n";
	return 0;
}

void upper(string & str)
{
	char ch;
	int n = 0;
	while (str[n])
	{
		ch = str[n];
		cout << char(toupper(ch));
		n++;
	}
	cout << endl;
}
