/*
 * Rectangle.cpp
 *
 */

#include "Rectangle.h"

Rectangle::Rectangle(const Point& tl, const Point& br){
	//implement
	this->topLeft=tl;
	this->bottomRight=br;
}

Rectangle::~Rectangle(){

}

bool Rectangle::draw() const {
	// implement draw(). Draws only if top left and bottom right points are notNeg
	if(this->bottomRight.isNotNeg() && this->topLeft.isNotNeg())
		return true;
	return false;
}

// provide getter/setter methods for bottomRight

Point Rectangle::getBottomRight(){
	return this->bottomRight;
}

void Rectangle::setBottomRight(Point point){
	this->bottomRight = point;
}
