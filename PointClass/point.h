/*
 * point.h
 *
 *  Created on: May 9, 2013
 *      Author: Vijaywargi
 */

#ifndef POINT_H_
#define POINT_H_


#include<iostream>

using namespace std;

class point
{
	int x,y;

public:
	point(int x=0,int y=0);

	int getX();
	int getY();

	void setX(int);
	void setY(int);

	void setXY(int,int);
	double getMagnitude();
	double getArgument();
	void print();

};

#endif /* POINT_H_ */
