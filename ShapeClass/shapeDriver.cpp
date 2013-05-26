/*
 * shapeDriver.cpp
 *
 *  Created on: May 16, 2013
 *      Author: Vijaywargi
 */



#include"shape.h"
#include"circle.h"
#include"rectangle.h"

using namespace std;

int main()
{
	circle c1;		//default constructor
	cout << "for object c1." << endl;
	//c1.getRadius();
	c1.print();
	cout <<endl << "Area of circle : "<< c1.getArea();

	circle c2(10,"green");
	cout << endl<<endl << "for object c2." << endl;
	c2.print();
	cout << endl << "Area of circle: " << c2.getArea();

	rectangle r1;		//default constructor
	cout <<endl<<endl<< "for object r1." <<endl;
	r1.print();
	cout <<endl<< "Area of rectangle: " << r1.getArea();

	rectangle r2(5,6,"blue");
	cout <<endl<<endl<< "for object r2." <<endl;
	r2.print();
	cout <<endl<< "Area of rectangle: " << r2.getArea();


	return 0;
}

