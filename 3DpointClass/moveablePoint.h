/*
 * moveablePoint.h
 *
 *  Created on: May 16, 2013
 *      Author: Vijaywargi
 */

#ifndef MOVEABLEPOINT_H_
#define MOVEABLEPOINT_H_

#include"Point.h"

class movablePoint : public point
{
	int xSpeed,ySpeed,zSpeed;

public:
	movablePoint(const int x, const int y, const int z, const int xSpeed=0, const int ySpeed=0, const int zSpeed=0);

	int getXSpeed() const;
	void setXSpeed(int speed);
	int getYSpeed() const;
	void setYSpeed(int speed);
	int getZSpeed() const;
	void setZSpeed(int speed);

	void move();
	void print();
};



#endif /* MOVEABLEPOINT_H_ */
