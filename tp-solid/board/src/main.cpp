
#include "Board.hpp"
#include "ReportFile.hpp"
#include "ReportStdout.hpp"
#include  "NumBoard.hpp"

void testBoard(Board & b) {
    ReportStdout r;
    ReportFile fic;
    std::cout << b.getTitle() << std::endl;

    b.add("item");
    b.add("item");

    r.reportStdout(b);
    fic.reportFile(b,"text.txt");
    
}

void testNumBoard(NumBoard & b) {
    ReportStdout r;
    ReportFile fic;

    std::cout << b.getTitle() << std::endl;
    b.add_num("item");
    b.add_num("item");
    b.add_num("item");
    b.add_num("item");
    b.add_num("item");
    
    r.reportStdout(b);
    fic.reportFile(b,"texttmp.txt");
}

int main() {

    Board b1;
    NumBoard n1;
    testBoard(b1);
    testNumBoard(n1);
    
    

    return 0;
}

