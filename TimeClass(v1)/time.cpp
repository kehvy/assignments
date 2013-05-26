/*
 * time.cpp
 *
 *  Created on: May 8, 2013
 *      Author: Vijaywargi
 */

#include "time.h"
#include<iostream>
#include<cstdlib>

using namespace std;
time::time(int h,int m, int s)

{
	setTime(h,m,s);
	//hour=h;
	//minute=m;
	//second=s;
}

int time::getHour()
{
	return hour;
}

int time::getMinute()
{
	return minute;
}

int time::getSecond()
{
	return second;
}

void time::setHour(int h)
{
	hour=h;
}

void time::setMinute(int m)
{
	minute=m;
}

void time::setSecond(int s)
{
	second=s;
}

void time::setTime(int h, int m, int s)
{
	setHour(h);
	setMinute(m);
	setSecond(s);
}

void time::print()
{
	cout << hour << ":" << minute << ":" << second << endl;
}

void time::nextSecond()
{
	if(second==59)
	{
		second=0;
		minute+=1;

		if(minute>59)
		{
			minute=0;
			hour+=1;

			if(hour>23)
			{
				hour=0;
			}
		}

	}
	else
		second+=1;


}
