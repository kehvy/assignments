/*
 * prac2.cpp
 *	checks whether a triangle is valid or not.
 *  Created on: Mar 14, 2013
 *      Author: Vijaywargi
 */




#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
	int a,b,c,sum;

	cout<<"Enter the value of all three angles of a triangle"<<endl;
	cout<<"a:";
	cin>>a;
	cout<<"b:";
	cin>>b;
	cout<<"c:";
	cin>>c;
	sum=a+b+c;
	if(sum == 180)					//sum of all the angles of a triangle is 180.
		cout<<"Valid triangle";
	else
		cout<<"Invalid triangle";
	return 0;
}
