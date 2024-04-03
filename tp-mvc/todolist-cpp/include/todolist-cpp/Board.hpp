#pragma once
#include <iostream> 
#include <string>
#include <list>
#include <todolist-cpp/Task.hpp>

class Board{

    public :
        Board();
        std::list<Task> _todo;
        std::list<Task> _done;
        void addTodo(const std::string &desc);
    //void toDone(int id);

    private :
    int _nextID; 
   
};