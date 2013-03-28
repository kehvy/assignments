/*
 * pfcalc.cpp
 *	PF calculator
 *  Created on: Mar 26, 2013
 *      Author: Vijaywargi
 */



#include<iostream>
#include<cstdlib>

using namespace std;

int main()
{
	cout << "Basic pay:";
	double basic_pay;
	cin >> basic_pay;

	cout << "Your contribution rate:";
	double rate;
	cin >> rate;

	cout << "Company's contribution rate:";
	double c_rate;
	cin >> c_rate;

	cout << "Increment rate:";
	double i_rate;
	cin >> i_rate;

	cout << "Rate of interest:";
	double roi;
	cin >> roi;


	cout << "Year:";
	int year;
	cin >> year;

	double y_cont, c_cont,total_cont;
	long acc,totalAmount=0,interest;


	for(int i=1;i<=year;i++)
	{
		if(i>=2)
			basic_pay=basic_pay + (basic_pay*i_rate/100);
		 y_cont = (basic_pay * rate/100)*12;
		 c_cont = (basic_pay * c_rate/100)*12;
		 total_cont = y_cont + c_cont;
		 totalAmount=totalAmount +total_cont;
		 interest=totalAmount*roi/100;
		 acc=totalAmount+interest;
		 totalAmount=acc;
	}
	cout << "Salary: " << basic_pay <<endl;
	cout << "your contribution: " << y_cont <<endl;
	cout << "company contributes: " << c_cont << endl;
	cout << "Total contribution:" << total_cont <<endl;
	cout << "Accumulated amount: " << acc <<endl;
	return 0;
}

