#include <iostream>
#include <string>

void strcount(const std::string * str);

int main()
{
	using namespace std;
	string mystr;

	cout << "Enter a line:\n";
	getline(cin, mystr);

	while (mystr != "")
	{
		strcount(&mystr);
		cout << "Enter next line (empty line to quit):\n";
		getline(cin, mystr);
	}
	cout << "Bye\n";
	return 0;
}
void strcount(const std::string * str)
{
	using namespace std;
	static int total = 0;
	int count = 0, length = (*str).length();

	cout << "\"" << *str << "\" contains ";
	for (int i = 0; i < length; i++)
	{
		if ((*str)[i] != ' ')
			count++;
	}
	total += count;
	cout << count << " characters\n";
	cout << total << " characters total\n";
}
