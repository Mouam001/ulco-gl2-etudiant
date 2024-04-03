#include <todolist-cpp/View.hpp>

#include <iostream>

std::string  showTask(const Task &t){
    return std::to_string(t._id) + ", " + t._name;

}


std::string printBoard(std::ostream &os, const Board &board){
    os<< " Todo:\n";
    for(const Task &task: board._todo){
        os << showTask(task)<< "\n";
        }
    os << "Done:\n";
    for(const  Task &task : board._done){
        os<<showTask(task)<<"\n";
    }
}