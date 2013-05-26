/*
 * testAccount.cpp
 *
 *  Created on: May 25, 2013
 *      Author: Vijaywargi
 */


#include "account.h"

int main()
{

		int choice;
		int accNum;
		double balance,creditAmt,debitAmt;
		cout << "Enter Account Number:" ;
		cin >> accNum;
		cout << "Enter current Balance:" ;
		cin >> balance;

		account acc1(accNum,balance);

	while(1)
	{
	cout <<endl << endl<< "Enter your choice:" << endl;
	cout <<  "1. Account Details "
			<< endl << "2. Credit amount" << endl << "3. Debit amount"
			<< endl << "4. Exit" << endl ;
	cin >> choice;


	switch(choice)
	{
	case 1:
		acc1.print();
		break;

	case 2:
		cout << "Enter amount to be credited:  ";
		cin >> creditAmt;
		acc1.credit(creditAmt);
		break;

	case 3:
		cout << "Enter amount to be debited: ";
		cin >> debitAmt;
		acc1.debit(debitAmt);
		break;

	case 4:
		exit(0);
		break;

	default:
		cout << "Invalid choice.";
		break;
	}
}
	return 0;
}

