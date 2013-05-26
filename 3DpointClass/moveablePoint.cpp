/*
 * moveablePoint.cpp
 *
 *  Created on: May 16, 2013
 *      Author: Vijaywargi
 */



#include "moveablePoint.h"

using namespace std;

movablePoint::movablePoint(const int x, const int y, const int z, const int xSpeed, const int ySpeed, const int zSpeed)
:point(x,y,z)
{
	this->xSpeed = xSpeed;
	this->ySpeed = ySpeed;
	this->zSpeed = zSpeed;
}

int movablePoint::getXSpeed() const {
	return xSpeed;
}

void movablePoint::setXSpeed(int xspeed) {
	this->xSpeed = xspeed;
}

int movablePoint::getYSpeed() const {
	return ySpeed;
}

void movablePoint::setYSpeed(int yspeed) {
	this->ySpeed = yspeed;
}

int movablePoint::getZSpeed() const {
	return zSpeed;
}

void movablePoint::setZSpeed(int zspeed) {
	this->zSpeed = zspeed;
}

void movablePoint::print()
{
	point::print();
	cout << "Speed: " << "(" << xSpeed << "," << ySpeed << "," << zSpeed << ")" <<endl;
}

void movablePoint::move()
{
	point::setX(point::getX() + xSpeed);
	point::setY(point::getY() + ySpeed);
	point::setZ(point::getZ() + zSpeed);
}
