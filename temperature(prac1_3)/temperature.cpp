/*
 * temperature.cpp
 *	converts celcius to farenheit and vice versa.
 *  Created on: Mar 28, 2013
 *      Author: Vijaywargi
 */



#include<iostream>
#include<cstdlib>

using namespace std;

int main()
{
	cout << "Choose an option to convert required temperature " <<endl;
	cout << "1) Celcius to farenheit" << endl << "2) Farenheit to celcius" <<endl;
	int option;
	cin >> option;

	double celcius,farenheit;

	switch(option)
	{
	case 1:
		cout << "Temperature in celcius: ";
		cin >>celcius;
		farenheit = 32 + (9 * celcius / 5);
		cout << "Temperature in farenheit: " << farenheit;
		break;

	case 2:
		cout << "Temperature in farenheit: ";
				cin >>farenheit;
				celcius = (farenheit - 32) * 5 / 9;
				cout << "Temperature in celcius: " << celcius;
				break;

	default:
		cout << "Invalid option.";
		break;
	}
	return 0;
}
