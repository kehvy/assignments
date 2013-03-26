/*
 * yearMonthDay.cpp
 *	Converts days into years,months and days
 *  Created on: Mar 22, 2013
 *      Author: Vijaywargi
 */


#include<iostream>
#include<cstdlib>

using namespace std;

int main()
{
	int days,temp,year,month,d;
	 cout << "Enter days:";
	 cin >> d;

	 year = d / 365;
	 temp = d % 365;
	 month = temp / 30;
	 days = temp % 30;

	 cout << d << " days = " << year << " years " << month << " months " << days << " days ";

	 return 0;
}

