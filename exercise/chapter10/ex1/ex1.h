#ifndef EX1_H_
#define EX1_H_

#include <string>

class BankAccount
{
	private:
		std::string bname;
		std::string bnum;
		double balance;
	public:
		BankAccount();
		BankAccount(std::string & na, int num, double n);
		void Deposit(double money);
		void Withdraw(double money);
		void Show()const;
};
#endif
