/*
 * ball.cpp
 *
 *  Created on: May 24, 2013
 *      Author: Vijaywargi
 */


#include "ball.h"
#include <iomanip>


ball::ball(double x, double y, double xSpeed, double ySpeed)
{
	this->x = x;
	this->xSpeed = xSpeed;
	this->y = y;
	this->ySpeed = ySpeed;
}
double ball::getX() const {
	return x;
}

void ball::setX(double x) {
	this->x = x;
}

double ball::getxSpeed() const {
	return xSpeed;
}

void ball::setxSpeed(double xSpeed) {
	this->xSpeed = xSpeed;
}

double ball::getY() const {
	return y;
}

void ball::setY(double y) {
	this->y = y;
}

double ball::getySpeed() const {
	return ySpeed;
}

void ball::setySpeed(double ySpeed) {
	this->ySpeed = ySpeed;
}

void ball::setXY(double x, double y) {
	this->x = x;
	this->y = y;
}
void ball::setXYSpeed(double xSpeed, double ySpeed) {
	this->xSpeed = xSpeed;
	this->ySpeed = ySpeed;
}

void ball::move()
{
	ball::setXY(ball::getX() + xSpeed, ball::getY() + ySpeed);
}

void ball::print()
{
	cout << endl << setprecision(3) <<  "Ball @ (" << x << "," << y << ") with speed ("
			<< xSpeed << "," << ySpeed <<")" ;
}



