/*
 * gcd.cpp
 *	This program calculates gcd of two positive numbers.
 *  Created on: Mar 15, 2013
 *      Author: Vijaywargi
 */





#include<iostream>
#include<cstdlib>
#include<cmath>

using namespace std;

int gcd(int a,int b)
{
	if(a>b)
	{
		if(a%b==0)
			return b;
		else
			gcd(a,a%b);
	}
	else
		gcd(b,a);
	return 1;
}

int main()
{
	int num1,num2;
	cout<<"Enter first number:";
	cin>>num1;
	cout<<"Enter second number:";
	cin>>num2;
	cout<<"GCD of "<<num1<<" and "<<num2<<" is "<<gcd(num1,num2);
	return 0;
}
