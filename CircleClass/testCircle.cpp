/*
 * testCircle.cpp
 *
 *  Created on: May 8, 2013
 *      Author: Vijaywargi
 */

#include "circle.h"

int main()
{
	circle c1;   //default constructor invoked
	cout << "for instance c1" <<endl;
	cout<< "color:"<< c1.getColor() << endl;
	cout << "radius:"<<c1.getRadius()<<endl;
	cout << "Area:"<< c1.getArea()<<endl;

	circle c2(10,"blue");
	cout <<"For instance c2" << endl;
	cout << "Color:" <<c2.getColor() << endl << "Radius:" << c2.getRadius()
			<< endl << "Area:" << c2.getArea() ;
	return 0;
}


