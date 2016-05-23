/*
 * Polygon.cpp
 *
 */

#include "Polygon.h"
#include <iostream>

Polygon::Polygon(int numPoints) {
	//allocate points. If numPoints is zero or negative then set to 1
	if(numPoints <= 0)
		numPoints = 1;
	this->maxPoints=numPoints;
	this->points = new Point();

}

Polygon::~Polygon() {
	//implement destructor
	delete [] points;
}


bool Polygon::draw() const {
	//draws only if there are >2 points that have notNeg points
	int i = 0;
	//std::vector<Point*>::iterator itr = points;
	for(int i=0; i < this->maxPoints; i++)
	{
		if(i == 2) return true;
		if(points[i].isNotNeg()) i++;
	}
//	for(int i=0; i < points->Point; i++){
//		if(i == 2) return true;
//		if(points->isNotNeg()) i++;
//	}
	return false;

}

const Point* Polygon::getPoint(int index) const {
	// implement. Return 0 if point is out of index
	if(index > this->maxPoints)return new Point(0,0);
	return &(points[index]);
}

bool Polygon::setPoint(int index, const Point& point) {
	// implement. Return false if trying to set Point out of bounds.
	if(index > this->maxPoints) return false;
	Point* temp = &(points[index]);
	return true;
}

int Polygon::getMaxPoints() const  {
	return maxPoints;
}
