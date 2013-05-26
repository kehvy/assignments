/*
 * circle.cpp
 *
 *  Created on: May 8, 2013
 *      Author: Vijaywargi
 */

#include "circle.h"
#include<string>
circle::circle(double radius, string color)
{
	this->radius = radius;
	this->color = color;
}

double circle::getRadius()
{
	return radius;
}

void circle::setRadius(double radius)
{
	this->radius = radius;
}

string circle::getColor()
{
	return color;
}

void circle::setColor(string color)
{
	this->color =color;
}

double circle::getArea()
{
	return 3.14*radius*radius;
}
