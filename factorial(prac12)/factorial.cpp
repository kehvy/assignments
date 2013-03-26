/*
 * factorial.cpp
 *	This program calculates factorial of a number.
 *  Created on: Mar 15, 2013
 *      Author: Vijaywargi
 */

#include<iostream>
#include<cstdio>
using namespace std;
int main() {
	int n;
	cout << "Enter a number to know its factorial:";
	cin >> n;
	int fact = 1;
	if (n < 0) {
		cout << "You entered a negative number" << endl
				<< "Please enter a positive integer";
	} else if (n == 0)
		cout << n << "!=0";
	else {
		for (int i = 1; i <= n; i++) {
			fact = fact * i;
		}
		cout << n << "!=" << fact;
	}
	return 0;
}



