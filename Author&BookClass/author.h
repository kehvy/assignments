/*
 * author.h
 *
 *  Created on: May 26, 2013
 *      Author: Vijaywargi
 */

#ifndef AUTHOR_H_
#define AUTHOR_H_

#include<iostream>
#include<cstdlib>
#include<cstring>

using namespace std;

class Author
{
	string name, email;
	char gender;

public:
	Author(string name, string email, char gender);
	string getEmail() const;
	char getGender() const;
	string getName() const;
	void setEmail(string email);

	void print();
};


#endif /* AUTHOR_H_ */
