/*
 * palindrome.cpp
 *	check whether entered number is palindrome or not.
 *  Created on: Mar 28, 2013
 *      Author: Vijaywargi
 */


#include<iostream>
#include<cstdlib>

using namespace std;

int main()
{
	int number,remainder,newNumber=0,temp;

	cout << "Enter a number to know whether it is palindrome or not: ";
	cin >> number;
	try
	{	if(number<0)
			throw " Please enter a positive number.";
		temp=number;
			while(number>0)
			{
				remainder = number % 10;
				newNumber = (newNumber * 10) + remainder;
				number = number / 10;
			}

			if(newNumber == temp)
				cout << temp << " is palindrome number.";
			else
				cout << temp << " is not palindrome number.";

	} catch (const char *str)
	{
		cerr << "Exception occured:" << str;
	}
		return 0;
}

