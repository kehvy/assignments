/*
 * complex.h
 *
 *  Created on: May 26, 2013
 *      Author: Vijaywargi
 */

#ifndef COMPLEX_H_
#define COMPLEX_H_


#include <iostream>
#include<cstdlib>

using namespace std;

class complex
{
	double real, imag;

public:
	complex(double real=0, double imag=0);
	double getImag() const;
	void setImag(double imag);
	double getReal() const;
	void setReal(double real);

	void setValue(double real, double imag);
	void print();
	bool isReal();
	bool isImaginary();

	complex &addInto(const complex &another);
	complex &addInto(double real, double imag);	//add in same instance

	complex addReturnNew(const complex &another) const;
	complex addReturnNew(double real, double imag) const;	//add in new instance

	//operator overloading
	complex operator+(complex);

};

#endif /* COMPLEX_H_ */
