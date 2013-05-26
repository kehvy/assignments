/*
 * pointDriver.cpp
 *
 *  Created on: May 9, 2013
 *      Author: Vijaywargi
 */



#include "point.h"


int main()
{
	point p1;
	//p1.print();
	int a,b;
	cout << "Enter co-ordinates:" ;
	cout << "a=";
	cin >> a;
	cout << "b=";
	cin >> b;
	p1.setXY(a,b);
	p1.print();
	cout << "Magnitude:" << p1.getMagnitude() <<endl;
	cout << "Argument:" << p1.getArgument() << endl;

	/*point p2(2);

	p2.print();
	cout << "Magnitude:" << p2.getMagnitude() <<endl;
	cout << "Argument:" << p2.getArgument() << endl; */
	return 0;

}
