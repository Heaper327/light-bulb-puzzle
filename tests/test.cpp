#include <catch2/catch_test_macros.hpp>
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <stack>
#include "cs225/PNG.h"

#include "board.h"

using namespace cs225;
using namespace std;

TEST_CASE("Constructor", "[weight=10][part1]")
{
	Board board(12);
	Board board1(0);
	Board board2(3);
	SUCCEED("Yep the constructor worked");
}
