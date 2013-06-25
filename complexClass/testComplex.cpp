/*
 * testComplex.cpp
 *
 *  Created on: Jun 24, 2013
 *      Author: Vijaywargi
 */

#include "complex.h"

#include <iostream>

using namespace std;

int main()
{
	complex c1;
	c1.print();
	c1.setValue(4,3.5);
	c1.print();

	c1.setReal(0);
	cout << boolalpha;
	cout << "Is "; c1.print(); cout << "real?" << c1.isReal() << endl;

	complex c2(3,0);
	cout << "Is "; c2.print(); cout << "real?" << c2.isReal() << endl;

	c1.print();	//(0 + i3.5)
	c2.print();	//(3 + i0)

	c1.addInto(c2).print(); //(3 + i3.5)
	c1.print();			//(3 + i3.5)

	c1.addInto(1,1).print();	//(4 + i4.5)
	c1.print();				//(4 + i4.5)

	c1.addReturnNew(c2).print();	//(7 + i4.5)
	c1.print();			//(4 + i4.5)

	c1.addReturnNew(1,1).print();	//(5 + i5.5)
	c1.print();			//(4 + i4.5)

	complex c3=c1+c2; //operator overloading
	c3.print(); //(7 + i4.5)
	return 0;
}


