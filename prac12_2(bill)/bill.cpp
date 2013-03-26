/*
 * bill.cpp
 *	generates bill according to call rates.
 *  Created on: Mar 23, 2013
 *      Author: Vijaywargi
 */




#include<iostream>
#include<cstdlib>

using namespace std;

int main()
{
	int calls;
	double rate;
	cout << "Enter number of calls:";
	cin >> calls;

	rate = 200;
	 if(calls<=100)
	 {
		 cout << "Your bill is " << rate << "Rs.";
	 }
	 else if(calls<=150)
	 {
		 rate = rate + (calls - 100) * 0.60;
		 cout << "Your bill is " << rate << "Rs.";
	 }
	 else if(calls<=200)
	 {
		 rate = rate + 50 * 0.60;
		 rate = rate + (calls - 150) * 0.50;
		 cout << "Your bill is " << rate << "Rs.";
	 }
	 else
	 {
		 rate = rate + 50 * 0.60;
		 rate = rate + 50 * 0.50;
		 rate = rate +(calls - 200) * 0.40;
		 cout << "Your bill is " << rate << "Rs.";
	 }
	 return 0;
}
