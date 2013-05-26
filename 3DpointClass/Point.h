/*
 * Point.h
 *
 *  Created on: May 16, 2013
 *      Author: Vijaywargi
 */

#ifndef POINT_H_
#define POINT_H_

#include<iostream>

class point
{
	int x,y,z;

public:
	point(const int x=0, const int y=0, const int z=0);
	int getX() const;
	void setX(int x);
	int getY() const;
	void setY(int y);
	int getZ() const;
	void setZ(int z);

	void print();
};



#endif /* POINT_H_ */
