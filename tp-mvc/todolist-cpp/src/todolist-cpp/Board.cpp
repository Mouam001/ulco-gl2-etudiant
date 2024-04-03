#include <todolist-cpp/Board.hpp>


Board::Board() : _nextID(1){}

void Board::addTodo(const std::string &desc){
    Task t {_nextID, desc};
    _todo.push_back({_nextID, desc});
    _nextID++;
} 

// void Board::toDone(int id){
    
// }