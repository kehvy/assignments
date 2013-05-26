/*
 * time.h
 *
 *  Created on: May 8, 2013
 *      Author: Vijaywargi
 */

#ifndef TIME_H_
#define TIME_H_


#include<iostream>
#include<cstdlib>

using namespace std;

class time
{
	int hour,minute,second;
public:
	time(int h=0,int m=0,int s=0) ;

	int getHour();
	int getMinute();
	int getSecond();

	void setHour(int);
	void setMinute(int);
	void setSecond(int);

	 void setTime(int,int,int);
	 void print();
	 void nextSecond();
};

#endif /* TIME_H_ */
