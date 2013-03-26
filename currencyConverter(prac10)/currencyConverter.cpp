/*
 * currencyConverter.cpp
 *	Converts dollar to rupee and vice versa.
 *  Created on: Mar 18, 2013
 *      Author: Vijaywargi
 */




#include<iostream>
#include<cstdlib>

using namespace std;

void dollar_to_rupee(double d)
{
	double r = 54.0 * d;
	cout << "Rupee:" << r;
}

void rupee_to_dollar(double r)
{
	double d = 0.02 * r;
	cout << "Dollar:" << d;
}

int main()
{
	int value;
	double dollar,rupee;
	cout << "Currency converter" << endl;
	cout << "Choose an option" << endl;
	cout << "1) Dollar to Rupee \n2) Rupee to Dollar:";
	cin >> value;

	switch(value)
	{
	case 1:
		cout << "Dollar:";
		cin >> dollar;
		dollar_to_rupee(dollar);
		break;

	case 2:
		cout << "Rupee:";
		cin >> rupee;
		rupee_to_dollar(rupee);
		break;

	default:
		cout << "Invalid choice";
		break;
	}
	return 0;
}
