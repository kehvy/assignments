/*
 * TestTime.cpp
 *
 *  Created on: Jun 25, 2013
 *      Author: Vijaywargi
 */




#include "Time.h"
#include <iostream>
using namespace std;

int main() {
	Time t1;
try{
	/*t1.print();
	t1.setTime(12,34,43);
	t1.nextSecond().print();
	((t1.nextSecond()).nextSecond()).print();
	t1.previousSecond().print();
	*/
	int h,m,s;

	cout << "Enter time : (hh:mm:ss) ";
	cin >> h >> m >> s;
	t1.setTime(h,m,s);
	t1.print();
	t1.nextMinute().print();

	Time t2(23,12,59);
	t2.print();		//23:12:59
	t2.nextSecond().print(); //23:13:0
	t2.setMinute(0);
	t2.previousSecond().print();	//22:59:59

	t2.setHour(23);
	t2.nextHour().print();	//0:59:59
	t2.setTime(0,0,0);
	t2.previousHour().print(); //23:0:0

	t2.setTime(21,60,23); //Exception

	}
	catch(exception &x) {
	cout << "Error:" << x.what();
	}

	return 0;
}


