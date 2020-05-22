#include <iostream>
#include "ex1.h"

int main()
{
	using namespace std;
	string name;
	int number;
	double balance;
	cout << "Please Enter Your Bank Name: ";
	getline(cin, name);
	while (name != "Q" && name != "q")
	{
		if (name.length() == 0)
		{
			BankAccount account1;
			account1.Show();
		}
		else
		{
			cout << "Please Provide Your Account Number: ";
			cin >> number;
			cout << "Please Enter Your Balance: ";
			cin >> balance;
			BankAccount account1(name, number, balance);
			account1.Show();
			cout << "Save $1000 to the account.\n";
			account1.Deposit(1000);
			account1.Show();
			cout << "Withdraw $2000 from the account.\n";
			account1.Withdraw(2000);
			account1.Show();
		}
		cout << "Please Enter the Next Bank Name: ";
		cin.ignore();
		getline(cin, name);
	}
	cout << "Bye!\n";
	return 0;
}
