#include <todolist-cpp/View.hpp>

#include <catch2/catch.hpp>

TEST_CASE( "View , test 1" ) {
    Task t {1, "TODO"};
    std::string msg = showTask(t);
    REQUIRE( msg == "1, TODO" );
}

