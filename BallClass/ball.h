/*
 * ball.h
 *
 *  Created on: May 24, 2013
 *      Author: Vijaywargi
 */

#ifndef BALL_H_
#define BALL_H_

#include<iostream>
#include<cstdlib>

using namespace std;

class ball
{

	double x, y, xSpeed, ySpeed;

public:
	ball(double x=0, double y=0, double xSpeed=0, double ySpeed=0);

	double getX() const;
	void setX(double x);
	double getxSpeed() const;
	void setxSpeed(double xSpeed);
	double getY() const;
	void setY(double y);
	double getySpeed() const;
	void setySpeed(double ySpeed);

	void setXY(double x, double y);
	void setXYSpeed(double xSpeed, double ySpeed);

	void move();
	void print();

};


#endif /* BALL_H_ */
