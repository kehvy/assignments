/*
 * shape.h
 *
 *  Created on: May 15, 2013
 *      Author: Vijaywargi
 */

#ifndef SHAPE_H_
#define SHAPE_H_

#include<string>
#include<iostream>

using namespace std;

class shape
{
	string color;

public:
	shape(string color="red");

	string getColor();
	void setColor(string);

	void print();
	double getArea();
};


#endif /* SHAPE_H_ */






