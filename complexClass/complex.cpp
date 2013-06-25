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

void complex::setValue(double real, double imag){
	this->real = real;
	this->imag = imag;
}

void complex::print(){
	cout << "( " << real << " + i" << imag << " )" << endl;
}

bool complex::isReal(){
	return (imag==0);
}

bool complex::isImaginary(){
	return (real==0);
}

complex & complex::addInto(const complex & another){
	real += another.real;
	imag += another.imag;
	return *this;
}

complex & complex::addInto(double real, double imag){
	this->real += real;
	this->imag += imag;
	return *this;
}

complex complex::addReturnNew(const complex & another) const{
	return complex(real + another.real, imag + another.imag);
}

complex complex::addReturnNew(double real, double imag) const{
	return complex(this->real + real, this->imag + imag);
}

complex complex::operator+(complex c){
	complex temp;
	temp.real = real + c.real;
	temp.imag = imag + c.imag;
	return temp;
}





