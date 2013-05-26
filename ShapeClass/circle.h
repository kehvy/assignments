/*
 * cirlce.h
 *
 *  Created on: May 16, 2013
 *      Author: Vijaywargi
 */

#ifndef CIRLCE_H_
#define CIRLCE_H_

#include "shape.h"

class circle : public shape
{
	int radius;

public:
	circle(int radius=1, string color="red");

	int getRadius();
	void setRadius(int);

	void print();
	double getArea();
};


#endif /* CIRLCE_H_ */
