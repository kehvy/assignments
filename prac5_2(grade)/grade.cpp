/*
 * grade.cpp
 *	Generates grade based on marks entered.
 *  Created on: Mar 22, 2013
 *      Author: Vijaywargi
 */



#include<iostream>
#include<cstdlib>

using namespace std;

int main()
{
	int marks1,marks2,marks3,marks4,marks5;
	double avg;
	cout << "Enter marks of 5 subjects out of 100:";
	cin >> marks1 >> marks2 >> marks3 >> marks4 >> marks5;

	if(marks1<=100 && marks2<=100 && marks3<=100 && marks4<=100 && marks5<=100 )
	{
		avg = (marks1 + marks2 + marks3 + marks4 + marks5)/5;
			cout << "average is " << avg << endl;
			if(avg >= 60 )
				cout<<"1st division";
			else if(avg >= 50 && avg <= 59)
				cout << "2nd division";
			else if(avg >= 40 && avg <= 49)
				cout << "3rd division";
			else
				cout << "Fail";
	}
	else
		cout << "Invalid marks";

	return 0;

}
