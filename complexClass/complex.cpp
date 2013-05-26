/*
 * complex.cpp
 *
 *  Created on: May 26, 2013
 *      Author: Vijaywargi
 */

#include "complex.h"

complex::complex(double real, double imag)
{
	this->real = real;
	this->imag = imag;
}
double complex::getImag() const {
	return imag;
}

void complex::setImag(double imag) {
	this->imag = imag;
}

double complex::getReal() const {
	return real;
}

void complex::setReal(double real) {
	this->real = real;
}




