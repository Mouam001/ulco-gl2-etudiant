#include "Board.hpp"
#include "Itemable.hpp"

class ReportFile{
    public:
    void reportFile(const Board& board,const std::string& fileName) {
                std::ofstream _ofs(fileName);
            for (const std::string & board : board.getItems()){
                _ofs << board << std::endl;
                _ofs << std::endl;

        }
    }
};