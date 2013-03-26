/*
 * noOfNotes.cpp
 *	provides number of notes needed for a particular amount of money
 *  Created on: Mar 23, 2013
 *      Author: Vijaywargi
 */




#include<iostream>
#include<cstdlib>

using namespace std;

int main()
{
	int num;
	cout << "Enter amount:";
	cin >> num;
	if(num >= 0)
	{
	cout << "500: "<< num/500 << endl;
	int a=num%500;
	cout << "100: "<< a/100 << endl;
	int b=a%100;
	cout << "50: " << b/50 << endl;
	int c=b%50;
	cout << "20: " << c/20 << endl;
	int d=c%20;
	cout << "10: " << d/10 << endl;
	int e=d%10;
	cout << "5: " << e/5 << endl;
	int f=e%5;
	cout << "2: " << f/2 << endl;
	int g=f%2;
	cout << "1: " << g/1 << endl;
	}
	else
		cout << "Please enter correct amount.";
	return 0;

}
