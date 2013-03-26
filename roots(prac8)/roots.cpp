/*
 * roots.cpp
 *	This program calculates roots of a quadratic equation.
 *  Created on: Mar 14, 2013
 *      Author: Vijaywargi
 */



#include<iostream>
#include<cstdlib>
#include<cmath>

using namespace std;

int main()
{
	double a,b,c,delta,root1,root2;
	cout<<"For equation ax^2+bx+c=0 \n Enter the values of coefficients"<<endl;
	cout<<"a=";
	cin>>a;
	cout<<"b=";
	cin>>b;
	cout<<"c=";
	cin>>c;

	delta=(b*b)-(4*a*c);

	if(delta<0)
	{
		cout<<"Roots are imaginary";
	}
	else if(delta==0)
	{
		cout<<"Roots are equal"<<endl;
		root1=(-b)/(2*a);
		cout<<"Roots are "<<root1<<" and "<<root1;
	}
	else
	{
		cout<<"Roots are real and distinct"<<endl;
		root1=((-b)+sqrt(delta))/(2*a);
		root2=((-b)-sqrt(delta))/(2*a);
		cout<<"Roots are "<<root1<<" and "<<root2;
	}
	return 0;
}


