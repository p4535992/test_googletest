/*
 * Circle.cpp
 *
 */

#include "Circle.h"

Circle::Circle(int r){
	//radius must be >0; if needed set to 1
	if(r < 0) this->radius = 1;
	else this->radius = r;
}

Circle::~Circle() {

}

bool Circle::draw() const {
	//draws if topLeft has >=0 coords.
	if(this->topLeft.isNotNeg()) return true;
	return false;
}

int Circle::getRadius() const {
	return radius;
}
