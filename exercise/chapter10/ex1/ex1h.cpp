#include <iostream>
#include <string>
#include "ex1.h"

BankAccount::BankAccount()
{
	std::cout << "Default constructor called.\n";
	bname = "Empty Name";
	bnum = "00000000";
	balance = 0.0;
}

BankAccount::BankAccount(std::string & na, int num, double n)
{
	bname = na;
	bnum = std::to_string(num);
	balance = n;
}

void BankAccount::Deposit(double money)
{
	using std::cout;
	if (money <= 0)
		cout << "You cannot save 0 or negative amount of money.\n"
			<< "Transaction is aborted.\n";
	else
		balance += money;
}

void BankAccount::Withdraw(double money)
{
	using std::cout;
	if (money <= 0)
		cout << "You cannot withdraw 0 or negative amount of money.\n"
			<< "Transaction is aborted.\n";
	else if (money > balance)
		cout << "You do not have enough balance.\n"
			<< "Transaction is aborted.\n";
	else
		balance -= money;
}

void BankAccount::Show() const
{
	using std::cout;
	using std::endl;
	cout << "Bank Name is: " << bname << endl;
	cout << "Account Number is: " << bnum << endl;
	cout << "Balance: $" << balance << endl;
}
