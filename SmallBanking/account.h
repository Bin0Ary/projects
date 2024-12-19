#pragma once
#include <iostream>
#include <string>
class account {
private:
	double balance;
	std::string name;
public:
	void deposit(double value);
	void withdraw(double value);
	double get_balance();
	account(std::string n = "None", double value = 0);
};
