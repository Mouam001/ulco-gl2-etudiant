#pragma once
#include <iostream> 
#include <string>
#include <todolist-cpp/Task.hpp>
#include <todolist-cpp/Board.hpp>


std::string showTask(const Task &t);
std::string printBoard(std::ostream &os, const Board &board);
