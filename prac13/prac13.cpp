/*
 * prac13.cpp
 *	Calculates in how many year fees gets doubled.
 *  Created on: Mar 22, 2013
 *      Author: Vijaywargi
 */




#include<iostream>
#include<cstdlib>

using namespace std;

int main()
{
	int amt,rate,inc,temp,count=0;

	cout << "Fees:";
	cin >> amt;
	cout << "Rate of increment:";
	cin >> rate;

	temp=amt;
	while(temp<=2*amt)
	{
		inc=(amt*rate)/100;
		temp=temp+inc;
		count++;

	}
	cout << "Fees gets double in " << count << " years.";
	return 0;
}
