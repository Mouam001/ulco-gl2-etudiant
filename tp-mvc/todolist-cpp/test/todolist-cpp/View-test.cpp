#include <todolist-cpp/View.hpp>
#include <todolist-cpp/Board.hpp>
#include <sstream>

#include <catch2/catch.hpp>

TEST_CASE("View , test 1") {
    Task t {1, "TODO"};
    std::string msg = showTask(t);
    REQUIRE( msg == "1, TODO" );
}

TEST_CASE("View printBoard, 1" ) {
    Board board;
    std::ostringstream os;
    printBoard(os, board);
    auto exp = "Todo:\nDone:\n";
    REQUIRE(os.str() == exp);
}



TEST_CASE("View ,printBoard, 2") {
    Board board;
    board.addTodo("Nic");
    board.addTodo("Las");
    std::ostringstream os;
    printBoard(os, board);
    auto exp = "Todo:\n1. foo\n2. bar\nDone:\n";
    REQUIRE(os.str() == exp);
}

