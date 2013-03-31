/*
 * fibonacci.cpp
 *	generates fibonacci series upto N
 *  Created on: Mar 28, 2013
 *      Author: Vijaywargi
 */


#include<iostream>
#include<cstdlib>

using namespace std;

int toInt(char *num)
{
	int n=0;
	n=atoi(num);
	return n;
}
int main(int argc, char *argv[])
{
	int a=0,b=1,c;
	//cout << "Enter a number upto which you want to print fibonacci series:";
	//cin >> num;
	int num=toInt(argv[1]);

	try {
		if(num<0)
			throw "Enter a positive number.";
		cout << "!!Fibonacci series!!" <<endl << endl;

		cout << a << " " << b << " " ;
		c=a+b;

		for (int i= 2; i < num; ++i)
		{
			cout << c << " ";
			a=b;
			b=c;
			c=a+b;
		}

	}
	catch (const char *str) {
		cerr << "Exception:" << str;
	}
		return 0;
}


