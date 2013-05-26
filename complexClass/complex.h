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

//	addInto() and addReturnNew() yet to be defined and implemented

};

#endif /* COMPLEX_H_ */
