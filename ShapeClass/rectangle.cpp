/*
 * rectangle.cpp
 *
 *  Created on: May 16, 2013
 *      Author: Vijaywargi
 */




#include"rectangle.h"

rectangle::rectangle(int length,int width,string color)
	:length(length),width(width), shape(color) {}

int rectangle::getLength()
{
	return length;
}
int rectangle::getWidth()
{
	return width;
}

void rectangle::setWidth(int width)
{
	this->width = width;
}

void rectangle::setLength(int length)
{
	this->length = length;
}

void rectangle::print()
{
	cout << "Rectangle" << endl << "length=" << length << " width= " << width << endl;
	 shape::print();
}

double rectangle::getArea()
{
	return length*width;
}
