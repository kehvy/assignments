/*
 * even_odd.cpp
 *	This program checks whether the entered number is even or odd.
 *  Created on: Mar 15, 2013
 *      Author: Vijaywargi
 */




#include<iostream>
#include<cstdlib>
#include<cmath>

using namespace std;

int main()
{
	int num;

	cout<<"Enter a number to know whether it is even or odd.";
	cin>>num;

	if(num%2==0)					//Even number is divisible by 2.
		cout<<num<<" is even number";
	else
		cout<<num<<" is odd number";
	return 0;
}

