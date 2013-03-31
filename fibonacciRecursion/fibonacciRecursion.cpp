/*
 * fibonacciRecursion.cpp
 *
 *  Created on: Mar 31, 2013
 *      Author: Vijaywargi
 */

#include<iostream>
#include<cstdlib>


using namespace std;
int fibonacci(int x)
{
	if(x<=1)
		return x;
	else
		return (fibonacci(x-2)+fibonacci(x-1));
}
int toInt(char *num)
{
	int n=0;
	n = atoi(num);
	return n;
}

int main(int argc, char *argv[])
{
	int num = toInt(argv[1]);

	//cout << "Enter the value of n: " << endl;
	//cin >> num;
	try {
		if(num<0)
			throw "Enter a positive value.";
		cout << "!!Fibonacci series!!" << endl ;
		for(int i=0; i<num;i++)
			{
				cout << fibonacci(i) << " ";
			}

	}
	catch (const char *str) {
		cerr << "Exception:" << str;
	}

	return 0;
}


