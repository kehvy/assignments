/*
 * timeDriver.cpp
 *
 *  Created on: May 8, 2013
 *      Author: Vijaywargi
 */


#include"time.h"
#include<cstdlib>
using namespace std;

int main()
{
	time t1;

	int h,m,s;
	try {
			cout << "Enter time : (hh:mm:ss) ";
			cin >> h >> m >> s;
			if((h<0 || h>23) || (m<0 || m>59) || (s<0 || s>59))
				throw "Please enter correct time.";
			t1.setTime(h,m,s);
			t1.print();
			t1.nextSecond();
			t1.print();
	} catch (const char *str) {
		cerr << "Exception:" << str;
	}

	return 0;
}


