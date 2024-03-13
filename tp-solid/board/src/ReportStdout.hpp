#include "Board.hpp"
#include "Itemable.hpp"
#include "Reportable.hpp"

class ReportStdout : public Reportable{
    public:
    void report(const Board& board) override{
            for (const std::string &board: board.getItems())
                std::cout << board << std::endl;
            std::cout << std::endl;
        }
};