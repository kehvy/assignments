/*
 * leapYear.cpp
 *
 *  Created on: Mar 14, 2013
 *      Author: Vijaywargi
 */



/*This program checks whether given year is a leap year or not*/

#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
	int year;
	cout<<"Enter year to know whether its a leap year or not";
	cin>>year;
	if(year>0)
	{
		if(year%4 == 0)
			cout<<year<<" is a leap year";
		else
			cout<<year<<" is not a leap year";
	}
	else
		cout<<"Please check if you have entered correct year";

	return 0;

}
