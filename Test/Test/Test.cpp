// Test.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <gtest/gtest.h>
#include "Game.hpp"
/*
TEST(GTTest, AssertTrue) {
	ASSERT_TRUE(true);
}
*/

TEST(Test, FirstTest) {
	Game game;
	EXPECT_EQ("open", game.selectGameObject("door"));
}

int main(int argc, char* argv[]) {
	Game game;

	//std::cout << game.selectGameObject("default");

	testing::InitGoogleTest(&argc, argv);
	getchar();
	return RUN_ALL_TESTS();
}