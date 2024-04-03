#include <todolist-cpp/Board.hpp>
#include <algorithm>

Board::Board() : _nextID(1){}

void Board::addTodo(const std::string &desc){
    Task t {_nextID, desc};
    _todo.push_back({_nextID, desc});
    _nextID++;
} 

void Board::toDone(int id){
    auto var = [id](const Task &task){
        return task._id == id;
    };

    auto it = std::find_if(_todo.begin(), _todo.end(), var);
    if( it != _todo.end()){
        _done.push_back(*it);
        _todo.erase(it);
    }
}
