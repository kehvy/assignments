/*
 * Time.h
 *
 *  Created on: Jun 25, 2013
 *      Author: Vijaywargi
 */

#ifndef TIME_H_
#define TIME_H_

#include<iostream>
#include<cstdlib>

using namespace std;

class Time
{
	int hour,minute,second;
public:
	Time(int h=0,int m=0,int s=0) ;

	int getHour();
	int getMinute();
	int getSecond();

	void setHour(int);
	void setMinute(int);
	void setSecond(int);

	 void setTime(int,int,int);
	 void print();

	 Time &nextSecond();
	 Time &previousSecond();
	 Time &nextMinute();
	 Time &previousMinute();
	 Time &nextHour();
	 Time &previousHour();

};




#endif /* TIME_H_ */
