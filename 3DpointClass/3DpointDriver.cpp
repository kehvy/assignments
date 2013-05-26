/*
 * 3DpointDriver.cpp
 *
 *  Created on: May 16, 2013
 *      Author: Vijaywargi
 */




#include "moveablePoint.h"

using namespace std;

int main()
{
 /*	point p1(1,2,3);  //superclass
	p1.print();

	cout <<endl <<endl;
	movablePoint mPoint(1,3,5);  //subclass with default speed
	mPoint.print();
 */
	cout << endl << endl;
	movablePoint mPoint2(7,8,9,1,2,3);	// subclass with defined speed
	mPoint2.print();
	mPoint2.move();
	cout << "After move: " << endl;
	mPoint2.print();


	return 0;
}
