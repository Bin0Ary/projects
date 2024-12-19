#include "account.h"



double account::get_balance() {
	return balance;
}

account::account(std::string n, double value)
	: balance{value}, name{n}
{
}

void account::deposit(double value) {
	balance += value;
	std::cout << "Depositing " << value << std::endl;
}

void account::withdraw(double value) {
	if ((balance - value) > 0) {
		balance -= value;
		std::cout << "Withdrawing " << value << std::endl;
	}
	else
		std::cout << "Withdraw ammount higher than account balance" << std::endl;
}