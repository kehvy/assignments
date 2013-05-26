/*
 * author.cpp
 *
 *  Created on: May 26, 2013
 *      Author: Vijaywargi
 */

#include "author.h"

Author::Author(string name,string email, char gender)
{
	this->name = name;
	this->email = email;
	this->gender = gender;
}

string Author::getEmail() const {
	return email;
}

char Author::getGender() const {
	return gender;
}

string Author::getName() const {
	return name;
}

void Author::setEmail(string email) {
	this->email = email;
}

void Author::print()
{
	cout << name << "(" << gender << ") at " << email << endl;
}


