
#include "Board.hpp"
#include "ReportFile.hpp"
#include "ReportStdout.hpp"
#include "NumBoard.hpp"

void testBoard(NumBoard & b) {
    ReportStdout r;
    ReportFile fic;

    std::cout << b.getTitle() << std::endl;
    b.add_num("item");
    b.add_num("item");
    b.add_num("item");
    b.add_num("item");
    b.add_num("item");
    
    r.reportStdout(b);
    fic.reportFile(b,"text.txt");
}

int main() {

    NumBoard b1;
    testBoard(b1);
    
   

    return 0;
}

