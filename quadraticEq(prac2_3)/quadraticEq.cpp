/*
 * quadraticEq.cpp
 *	calculates roots of a quadratic equation
 *  Created on: Mar 28, 2013
 *      Author: Vijaywargi
 */




#include<iostream>
#include<cstdlib>
#include<cmath>

using namespace std;

void roots(double a, double b, double c)
{
	double delta=(b*b)-(4*a*c);
	double root1,root2;
	try
	{
		if(delta<0)
			throw "No real roots.";
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
	}
	catch(const char *str)
	{
		cerr << "Exception: " <<str;
	}


}

int main()
{
	double a,b,c;
	cout<<"For equation ax^2+bx+c=0 \nEnter the values of coefficients"<<endl;
	cout<<"a=";
	cin>>a;
	cout<<"b=";
	cin>>b;
	cout<<"c=";
	cin>>c;
	roots(a,b,c);
	return 0;
}
