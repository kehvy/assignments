/*
 * circle.h
 *
 *  Created on: May 8, 2013
 *      Author: Vijaywargi
 */

#ifndef CIRCLE_H_
#define CIRCLE_H_


#include<cstdlib>
#include<iostream>
#include<string>

using namespace std;

class circle
{
	double radius;
	string color;
public:

	//constructor
	circle(double radius=1.0,string color="red");

	//getters
	double getRadius();
	string getColor();

	//setters
	void setRadius(double);
	void setColor(string);

	//member function
	double getArea();

};

#endif /* CIRCLE_H_ */
