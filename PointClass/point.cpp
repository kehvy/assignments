/*
 * point.cpp
 *
 *  Created on: May 9, 2013
 *      Author: Vijaywargi
 */

#include "point.h"
#include<cmath>
using namespace std;

point::point(int x,int y)
{
	this->x = x;
	this->y = y;
}

int point::getX() { return x; }
int point::getY() { return y; }

void point::setX(int x) { this->x = x; }
void point::setY(int y) { this->y = y; }
void point::setXY(int x, int y) { this->x=x; this->y=y; }

double point::getMagnitude()
{
	return sqrt((x*x) + (y*y));
}

double point::getArgument()
{
	 return atan2(y,x) ;
}

void point::print()
{
	cout << "(" << x << "," << y << ")" <<endl;
}



