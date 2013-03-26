/*
 * ascii.cpp
 *	Checks whether entered character is digit or alphabet or special character.
 *  Created on: Mar 22, 2013
 *      Author: Vijaywargi
 */




#include<iostream>
#include<cstdlib>

using namespace std;

int main()
{
	int num;
	char ch;
	cout << "Enter any character:";
	cin >> ch;						//read a character
	num = ch;						//assign character to integer variable
	if(num>=47 && num<=58)
		cout << "Digit";
	else if(num>=65 && num<=90)
		cout << "Uppercase alphabet";
	else if(num>=97 && num<=122)
		cout << "Lowercase alphabet";
	else
		cout << "Special character";
	return 0;
}
