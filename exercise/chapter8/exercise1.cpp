#include <iostream>
int count = 0;
int Max = 80;
void showstr(const char * str, int n = 0);

int main()
{
	using namespace std;
	char str[Max];
	cout << "Enter some characters: ";
	cin.getline(str, Max);

	cout << "showstr(str) is: \n";
	showstr(str);
	cout << "showstr(str, 1) is:\n";
	showstr(str, 1);
	
	cout << "showstr(str) is: \n";
	showstr(str);
	cout << "showstr(str, 1) is:\n";
	showstr(str, 1);
	return 0;
}

void showstr(const char * str, int n)
{
	using namespace std;
	count++;
	if (n == 0)
		cout << str << endl;
	else 
	{
		for (int i = 0; i < count; i++)
			cout << str << endl;
	}

}
