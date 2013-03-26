/*
 * salary.cpp
 *	Calculates gross salary.
 *  Created on: Mar 23, 2013
 *      Author: Vijaywargi
 */



#include<iostream>
#include<cstdlib>

using namespace std;

int main()
{
	int amt;

	cout << "Basic salary:";
	cin >> amt;
	if(amt<1500)
	{
		amt=amt+(amt*10/100)+(amt*90/100);
		cout << "Gross salary:" << amt;
	}
	else
	{
		amt = amt + 500 + (amt * 98 / 100);
		cout << "Gross salary:" << amt;
	}
	return 0;
}
