//============================================================================
// Name        : TestHelloWith5DeepCopyEOperatori.cpp
// Author      : 4535992
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "gtest/gtest.h"
#include "TestRectangleGoogle.cpp"


using namespace std;

int main(int argc, char **argv) {
	// The following line must be executed to initialize Google Mock
    // (and Google Test) before running the tests.
    //::testing::InitGoogleMock(&argc, argv);
	//::testing::InitGoogleTest(&argc, argv);
    //return RUN_ALL_TESTS();

	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();

	//cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	//return 0;
}

