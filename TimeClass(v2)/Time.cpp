/*
 * Time.cpp
 *
 *  Created on: Jun 25, 2013
 *      Author: Vijaywargi
 */

#include "Time.h"
#include<iostream>
#include<cstdlib>
#include <stdexcept>

using namespace std;


Time::Time(int h, int m, int s)
{
	setTime(h,m,s);
	//hour=h;
	//minute=m;
	//second=s;
}

int Time::getHour()
{
	return hour;
}

int Time::getMinute()
{
	return minute;
}

int Time::getSecond()
{
	return second;
}

void Time::setHour(int h)
{
	if(h<0 || h >23)
		throw out_of_range("Invalid hour! Range 0 - 23" );
	else
			hour=h;
}

void Time::setMinute(int m)
{
	if(m<0 || m>59)
			throw out_of_range("Invalid minute! Range 0 - 59" );
	else
		minute=m;
}

void Time::setSecond(int s)
{
	if(s<0 || s >59)
			throw out_of_range("Invalid second! Range 0 - 59" );
	else
		second=s;
}

void Time::setTime(int h, int m, int s)
{
	setHour(h);
	setMinute(m);
	setSecond(s);
}

void Time::print()
{
	cout << hour << ":" << minute << ":" << second << endl;
}

Time &Time::nextSecond()
{
	if(second==59)
	{
		second=0;
		minute++;

		if(minute>59)
		{
			minute=0;
			hour++;

			if(hour>23)
			{
				hour=0;
			}
		}

	}
	else
		second++;

	return *this;

}

Time &Time::previousSecond()
{
	if(second==0)
	{
		second=59;
		minute--;

		if(minute<=0)
		{
			minute=59;
			hour--;

			if(hour<0)
			{
				hour=23;
			}
		}

	}
	else
		second--;

	return *this;

}

Time &Time::nextMinute(){
	if(minute>=59)
	{
		minute=0;
		hour++;

		if(hour>23)
		{
			hour=0;
		}
	}


	else
		minute++;

	return *this;
}

Time &Time::previousMinute() {
	if(minute<=0)
	{
		minute=59;
		hour--;

		if(hour<0)
			hour=23;
	}

	else
		minute--;

	return *this;
}

Time &Time::nextHour()
{
	if(hour == 23)
		hour=0;
	else
		hour++;

	return *this;
}

Time &Time::previousHour()
{
	if(hour == 0)
		hour=23;
	else
		hour--;
	return *this;
}
