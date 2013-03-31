/*
 * simpleCal.cpp
 *	performs simple mathematical operations with more than two operators
 *	evaluation is from left to right
 *  Created on: Mar 30, 2013
 *      Author: Vijaywargi
 */




#include<iostream>
#include<cstdlib>
#include<cctype>

using namespace std;

int main()
{

	int x,y;  //operands
	int i=0;
	char op;
	cout << "no. of operators: ";
	int n;
	cin >> n;

	try {
		if( !(isdigit(n)) )
			throw "Only digit accepted.";

		cin >> x;
			while (i < n )
			{

				cin >> op >> y;
				i++;
				if(op!='+' && op!='*' && op!='-' && op!='/')
								throw "We provide only these operators [+, -, *, /] \n Try again !" ;
				switch(op)
				{
				case '+':
					x= x+y;
					break;
				case '-':
					x=x-y;
					break;
				case '*':
					x=x*y;
					break;
				case '/':
					try
					{
						if(y==0)
							throw "Denominator cannot be zero.";
						x=x/y;


					}
					catch (const char *str) {
					cerr << "Exception: " <<str;
					}
					break;

				default:
					cout << "invalid operator";
					break;
				}
			}
			cout << "Answer: " << x;

	}

	catch (const char *str) {
		cerr << "Exception:" <<str;
	}
	catch (const char *str) {
			cerr << "Exception:" <<str;
		}
		return 0;

}
