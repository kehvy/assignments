/*
 * totalExpense.cpp
 *	Calculates total expense based on number of items and price per item.
 *  Created on: Mar 23, 2013
 *      Author: Vijaywargi
 */

#include<iostream>
#include<cstdlib>

using namespace std;

int main()
{
	int quantity;
	double price;

	cout << "Enter total no. of items: ";
	cin >> quantity;
	cout << "Enter price per item: ";
	cin >> price;
	double total_exp=quantity*price;
	if(total_exp > 5000)
	{
		double disc=total_exp*10/100;
		cout << "After discount\n";
		cout << "Total expense= " << total_exp - disc;
	}
	else
		cout << "Total expense= "<< total_exp;
	return 0;
}


