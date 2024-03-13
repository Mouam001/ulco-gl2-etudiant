#include "Board.hpp"
#include "Itemable.hpp"

class ReportStdout{
    public:
    void reportStdout(const Board& board) {
            for (const std::string &board: board.getItems())
                std::cout << board << std::endl;
            std::cout << std::endl;
        }
};