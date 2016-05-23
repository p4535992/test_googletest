/*
 * Shape.h
 *
 */

#ifndef SHAPE_H_
#define SHAPE_H_

#include "Point.h"

class Shape {
public:
	Shape();
	// TODO implement destructor
	virtual ~Shape();

	// TODO all shapes must provide a draw() method that has no arguments and return true if draw succeeded
    bool draw();
	Point getTopLeft() const;
	void setTopLeft(Point topLeft);

protected:
	Point topLeft;
};

#endif /* SHAPE_H_ */
