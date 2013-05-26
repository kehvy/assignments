/*
 * circle.cpp
 *
 *  Created on: May 16, 2013
 *      Author: Vijaywargi
 */

#include"circle.h"
#define PI 3.14


circle::circle(int radius,string color) :shape(color)
{
	this->radius =radius;
}
int circle::getRadius()
{
	return radius;
}

void circle::setRadius(int radius)
{
	this->radius = radius;
}

void circle::print()
{
	cout << "Radius of cirlce is: " << radius <<endl ;
	shape::print();
}

double circle::getArea()
{
	return PI*radius*radius;
}
