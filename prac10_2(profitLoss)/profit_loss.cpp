/*
 * profit_loss.cpp
 *	Shows whether there is a profit or loss.
 *  Created on: Mar 23, 2013
 *      Author: Vijaywargi
 */



#include<iostream>
#include<cstdlib>

using namespace std;

int main()
{
	int sp,cp;

	cout << "Cost price: ";
	cin >> cp;
	cout << "Selling price: ";
	cin >> sp;

	if(sp > cp)
	{
		cout << "Profit" << endl;
		cout << "Profit = " << (sp-cp) << "Rs." << endl;
		cout << "Profit% = " << (sp-cp)*100/cp;
	}
	else
	{
		cout << "Loss" << endl;
		cout << "Loss = " << (cp-sp) << "Rs." << endl;
		cout << "Loss% = " << (cp-sp)*100/cp;
	}
	return 0;
}
