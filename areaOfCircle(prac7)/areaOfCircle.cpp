/*
 * areaOfCircle.cpp
 *	This program calculates area of a circle.
 *  Created on: Mar 14, 2013
 *      Author: Vijaywargi
 */




#include<iostream>
#include<cstdlib>
using namespace std;
#define pi 3.14

int main()
{
	double area,radius;
	cout<<"Enter radius of a circle:";
	cin>>radius;

	if(radius>0)
	{
		area = pi * radius * radius;
		cout<<"Area of circle with radius "<<radius<<" is "<<area;
	}
	else
		cout<<"Invalid radius";

	return 0;
}



