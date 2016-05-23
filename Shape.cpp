/*
 * Shape.cpp
 *
 */

#include "Shape.h"

Shape::Shape(){
	topLeft = Point(-1, -1);
}

Shape::~Shape(){}

// TODO all shapes must provide a draw()method that has no arguments and return true if draw succeeded
bool Shape::draw(){
	return true;
}

Point Shape::getTopLeft() const {
	return topLeft;
}

void Shape::setTopLeft(Point topLeft) {
	this->topLeft = topLeft;
}
