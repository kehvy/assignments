/*
 * shape.cpp
 *
 *  Created on: May 15, 2013
 *      Author: Vijaywargi
 */

#include "shape.h"
#include<iostream>


shape::shape(string color)
{
	this->color = color;
}

string shape::getColor()
{
	return color;
}

void shape::setColor(string color)
{
	this->color = color;
}

void shape::print()
{
	cout << "Color: " << color;
}

