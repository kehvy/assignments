/*
 * swap2.cpp
 *	This program swaps the value of two variables without using any third variable.
 *  Created on: Mar 14, 2013
 *      Author: Vijaywargi
 */





#include<iostream>
#include<cstdlib>
using namespace std;

void swap(int &x,int &y)
{
	x=x+y;
	y=x-y;
	x=x-y;
}
int main()
{
	int num1,num2;
	cout<<"Enter first number:";
	cin>>num1;
	cout<<"Enter second number:";
	cin>>num2;

	cout<<"After swapping:"<<endl;
	swap(num1,num2);
	cout<<"First number is:"<<num1<<endl;
	cout<<"Second number is:"<<num2;
	return 0;
}
