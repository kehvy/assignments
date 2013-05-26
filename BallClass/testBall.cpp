/*
 * testBall.cpp
 *
 *  Created on: May 24, 2013
 *      Author: Vijaywargi
 */


#include "ball.h"


int main()
{

	/*ball b1;   //default constructor invoked with speed (0,0)
	b1.move();
	b1.print();
	cout << endl <<endl;

	ball b2(1,2,0.5,1.2);
	b2.print();
	b2.move();
	cout <<endl << "After moving";
	b2.print();
	cout << endl << endl; */

	float x,y,xSpeed,ySpeed;
	cout << "(x,y)" << endl << "x:";
	cin >> x;
	cout << "y:";
	cin >> y;
	cout << "(xSpeed,ySpeed)" << endl << "xSpeed:";
	cin >> xSpeed;
	cout << "ySpeed:";
	cin >> ySpeed;
	ball b3(x,y,xSpeed,ySpeed);
	b3.print();
	b3.move();
	cout << endl << "After moving";
	b3.print();


	return 0;
}

