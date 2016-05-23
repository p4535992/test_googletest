#include <gtest/gtest.h>
#include "Rectangle.h"
#include "Shape.h"
#include "Point.h"

class TestRectangleGoogle: public ::testing::Test {
protected:
  TestRectangleGoogle() {}
  virtual ~TestRectangleGoogle() {}
  virtual void SetUp() {}
  virtual void TearDown() {}


};

TEST(TestRectangleGoogle,testRectangle){
	Point p1(2, 3);
	Point p2(4, 8);
	Rectangle r1(p1, p2);
	ASSERT_TRUE(r1.getTopLeft() == p1);
	ASSERT_TRUE(r1.getBottomRight() == p2);
	Shape* pS = new Rectangle();
	delete pS;
	pS = new Rectangle(p1, p2);
	delete pS;
}

TEST(TestRectangleGoogle,testDraw) {
	Point p1(2, 3);
	Point p2(4, 8);
	Rectangle r1(p1, p2);
	bool result = r1.draw();
	ASSERT_EQ(result, true);
}





