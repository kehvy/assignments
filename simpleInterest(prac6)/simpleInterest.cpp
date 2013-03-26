/*
 * simpleInterest.cpp
 *	This program calculates simple interest.
 *  Created on: Mar 14, 2013
 *      Author: Vijaywargi
 */




#include<iostream>
#include<cstdlib>
using namespace std;

int sim_int(double p,double r,double n)
{
	return((p*r*n)/100);
}
int main()
{
	double p,r,n,i;
	cout<<"To calculate simple interest,enter"<<endl;
	cout<<"Principle amount:";
	cin>>p;
	cout<<"Rate of interest:";
	cin>>r;
	cout<<"Time duration:";
	cin>>n;
	i=sim_int(p,r,n);
	cout<<"Simple interest is "<<i;
	return 0;
}
