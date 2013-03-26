/*
 * calc.cpp
 *	A simple calculator having these operations.. +  , - , * , / .
 *  Created on: Mar 25, 2013
 *      Author: Vijaywargi
 */




#include<iostream>
#include<cstdlib>

using namespace std;

int main()
{
	double num1,num2;
	char ch;
	cout << "Calculator" << endl;
	try {
		cout << "Enter number1 , operator , number2" << endl;
			cin >> num1 >> ch >> num2;

			if(ch!='+' && ch!='*' && ch!='-' && ch!='/')
				throw "We provide only these operators [+, -, *, /] \n Try again !" ;

			switch(ch)
			{
			case '+':
				cout << num1 << " + " << num2 <<" = " << num1+num2;
				break;

			case '-':
				cout << num1 << " - " << num2 <<" = " << num1-num2;
				break;

			case '*':
				cout << num1 << " * " << num2 <<" = " << num1*num2;
				break;

			case '/':
				try
				{
					if(num2==0)
					{
						throw "Denominator cannot be zero";
					}
					cout << num1 << " / " << num2 <<" = " << num1/num2;


				}
				catch (const char *str1)
				{
					cout << "Exception occured:" << str1;
				}
				break;

			default:
				cout << "Invalid operator";
				break;
			}

	}
	catch (const char *str)
	{
		cout << "Exception occured:" << str;
	}

	return 0;
}
