/*
 * account.h
 *
 *  Created on: May 24, 2013
 *      Author: Vijaywargi
 */

#ifndef ACCOUNT_H_
#define ACCOUNT_H_

#include<iostream>
#include<cstdlib>

using namespace std;

class account
{
	int accountNumber;
	double balance;

public:
	account(int accountNumber, double balance);

	int getAccountNumber();
	int getBalance();
	void setBalance(double balance);

	void credit(double);
	void debit(double);
	void print();
};


#endif /* ACCOUNT_H_ */
