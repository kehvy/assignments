/*
 * account.cpp
 *
 *  Created on: May 24, 2013
 *      Author: Vijaywargi
 */


#include "account.h"

account :: account(int accountNumber, double balance)
{
	this->accountNumber = accountNumber;
	this->balance = balance;
}

int account::getAccountNumber()
{
	return accountNumber;
}
int account::getBalance()
{
	return balance;
}
void account::setBalance(double balance)
{
	this->balance = balance;
}

void account::credit(double amount)
{
	balance += amount;
	cout << endl <<"Amount credited: " << amount << endl;
	cout << "Current Balance.:" << balance << endl;
}

void account::debit(double amount)
{
	if(amount > balance)
		cout << "Amount to be withdrawn exceeds current balance." << endl;

	else
	{
		balance -= amount;
		cout << "Amount withdrawn:" << amount << endl;
	}
	cout << "Current Balance.:" << balance << endl;
}

void account::print()
{
	cout << "A/C no.: " << accountNumber <<endl;
	cout << "Balance.:" << balance << endl;
}


