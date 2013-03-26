/*
 * inch-cm.cpp
 *	Converts length in feet and inches to centimeters
 *  Created on: Mar 23, 2013
 *      Author: Vijaywargi
 */




#include<iostream>
#include<cstdlib>

using namespace std;
#define inch_cm 2.54
#define feet_inch 12

int main()
{
	int feet,inch;

	cout << "Enter length" <<endl;
	cout << "Feet:";
	cin >> feet;
	cout << "Inches:";
	cin >> inch;
	if(feet >=0 && inch >= 0)
	{
	int total_inch=(feet * feet_inch) + inch;

	cout << "Total inches:" << total_inch << endl;
	cout << "Length in centimetres:" << total_inch * inch_cm;
	}
	else
		cout << "Length cannot be negative";
	return 0;
}
