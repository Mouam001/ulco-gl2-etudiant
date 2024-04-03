#include <todolist-cpp/Board.hpp>
#include <todolist-cpp/View.hpp>

#include <iostream>
#include <sstream>

int main(){

    Board board;

    std::string input, cmd, rst;
    while(true){
        printBoard(std::cout, board);
        std::getline(std::cin, input);
        std::istringstream iss(input);
        std::getline(iss, cmd, ' ');
        std::getline(iss, rst);

        if( cmd == "add" and rst !=""){
            board.addTodo(rst);
        }
        else if ( cmd =="done" and rst!=""){
            board.toDone(std::stoi(rst));
        }
        else if (cmd =="quit") break;
        
    }
    return 0;

}

