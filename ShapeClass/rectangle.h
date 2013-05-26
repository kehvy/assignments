/*
 * rectangle.h
 *
 *  Created on: May 16, 2013
 *      Author: Vijaywargi
 */

#ifndef RECTANGLE_H_
#define RECTANGLE_H_

#include"shape.h"

class rectangle : public shape
{
	int length,width;

public:
	rectangle(int length=1,int width=1,string color="red");

	int getLength();
	int getWidth();

	void setLength(int);
	void setWidth(int);

	void print();
	double getArea();
};


#endif /* RECTANGLE_H_ */
