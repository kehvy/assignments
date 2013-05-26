/*
 * book.cpp
 *
 *  Created on: May 26, 2013
 *      Author: Vijaywargi
 */

#include "book.h"

Book::Book(string name,Author author, double price, int qtyInStock) 	// getting error here : no matching function for call to 'Author::Author()

{
	this->name = name;

//	how to initialize author here ?

	this->price = price;
	this->qtyInStock = qtyInStock;
}
const Author& Book::getAuthor() const {
	return author;
}

const string& Book::getName() const {
	return name;
}

double Book::getPrice() const {
	return price;
}

void Book::setPrice(double price) {
	this->price = price;
}

int Book::getQtyInStock() const {
	return qtyInStock;
}

void Book::setQtyInStock(int qtyInStock) {
	this->qtyInStock = qtyInStock;
}





