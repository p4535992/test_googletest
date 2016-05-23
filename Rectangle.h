/*
 * Rectangle.h
 *
 */

#ifndef RECTANGLE_H_
#define RECTANGLE_H_

#include "Shape.h"

class Rectangle : public Shape {
public:
	explicit Rectangle(const Point& tl=Point(-1, -1), const Point& br=Point(-1, -1));	// TODO implement
	virtual ~Rectangle();

	// TODO implement draw(). Draws only if top left and bottom right points are notNeg
    virtual bool draw() const;

    Point getBottomRight();
    void setBottomRight(Point point);

protected:
	Point bottomRight;	// TODO provide getter/setter methods
};

#endif /* RECTANGLE_H_ */
