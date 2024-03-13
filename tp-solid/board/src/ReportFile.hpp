#pragma once 
#include "Board.hpp"
#include "Reportable.hpp"

class ReportFile : public Reportable{
    public:

    void report(const Board& board) override {
                std::ofstream _ofs("tmp.txt");
            for (const std::string & board : board.getItems()){
                _ofs << board << std::endl;
                _ofs << std::endl;

        }
    }
};