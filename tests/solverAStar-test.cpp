#include <catch2/catch_test_macros.hpp>
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <stack>
#include "cs225/PNG.h"

#include "board.h"
#include "solverAStar.h"
#include "test-utils.h"

using namespace cs225;
using namespace std;

TEST_CASE("Solving 3x3 game test", "[astar]")
{
	SolverAStar solver{"../tests/3x3-game.txt"};
	vector<Board> solution = solver.solve();
	vector<Board> expected_solution = {
		Board({
			{0, 0, 0},
			{0, 0, 0},
			{0, 0, 0}
		}),
		Board({
			{1, 1, 1},
			{1, 1, 1},
			{1, 1, 1}
		}),
	};
	REQUIRE(solution == expected_solution);
}

TEST_CASE("Solving simple 4x4 game test", "[astar]")
{
	SolverAStar solver{"../tests/4x4-simple-game.txt"};
	vector<Board> solution = solver.solve();
	vector<Board> expected_solution = {
		Board({
			{0, 0, 0, 0},
			{0, 0, 0, 0},
			{0, 0, 0, 0},
			{0, 0, 0, 0},
		}),
		Board({
			{0, 1, 1, 1},
			{0, 1, 1, 1},
			{0, 1, 1, 1},
			{0, 0, 0, 0},
		}),
	};
	REQUIRE(solution == expected_solution);
}

TEST_CASE("Random 5x5 game test", "[astar]")
{
	Solver* solver = new SolverAStar();
	REQUIRE(randomSolveTest(solver, 5, 5));
	delete solver;
}

TEST_CASE("Random 6x6 game test", "[astar]")
{
	Solver* solver = new SolverAStar();
	REQUIRE(randomSolveTest(solver, 6, 3));
	delete solver;
}