#include <todolist-cpp/Board.hpp>
#include <todolist-cpp/Task.hpp>

#include <catch2/catch.hpp>

TEST_CASE( "Board , test 1" ) {
    Board b;
    b.addTodo("test");
    REQUIRE( b._todo.size() == 1);
    REQUIRE(b._done.size() == 0);
}


TEST_CASE( "Board , test 2" ) {
    Board b;
    b.addTodo("test");
    REQUIRE( b._todo.size() == 1);
    REQUIRE(b._done.size() == 0);

    Task t = b._todo.back();
    REQUIRE(t._id == 1);
    REQUIRE(t._name == "test");
    
}

