/*
 * prac1.cpp
 *
 *  Created on: Mar 13, 2013
 *      Author: Khushbu Vijaywargi
 *
 */


//This program calculates the youngest of three persons whose ages are entered by user.
#include<iostream>
#include<cstdlib>
using namespace std;

int main()
{
	cout<<"To know who is the youngest among Ajay, Vijay and Jay,enter their ages."<<endl;
	int ajay,vijay,jay;
	cout<<"Ajay:";
	cin>>ajay;
	cout<<"Vijay:";
	cin>>vijay;
	cout<<"Jay:";
	cin>>jay;

	if(ajay == vijay && ajay == jay && vijay == jay)	//if all three have same age.
	{
			cout<<"All three have same age";
			return 0;
	}
	if(ajay <= vijay && ajay <= jay)
	{
		if(ajay == vijay)
			cout<<"Both Ajay and Vijay are the youngest";
		else if(ajay == jay)
			cout<<"Both Ajay and Jay are the youngest";

		else
			cout<<"Ajay is the youngest";
	}
	else if(vijay <= ajay && vijay <= jay)
	{
		if(vijay == jay)
			cout<<"Both Vijay and Jay are the youngest";
		else
			cout<<"Vijay is the youngest";
	}
	else
	{
			cout<<"Jay is the youngest";
	}
	return 0;
}





