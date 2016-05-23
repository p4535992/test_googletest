/*
 * Point.h
 *
 */

#ifndef POINT_H_
#define POINT_H_

struct Point {
	explicit Point(int ax=-1, int ay=-1) : x(ax), y(ay) {}

	int x;
	int y;
	// TODO implement inline method to return true if both coordinates are >= 0
	bool isNotNeg() const {
		if(x > 0 && y >0)
			return true;
		return false;
	}
	// TODO implement inline operator ==
	bool operator==(const Point& rh) const {
		if(this->x != (rh).x)
			return false;
		if(this->y != (rh).y)
			return false;
		return true;
	}
};



#endif /* POINT_H_ */
