
#include "Board.hpp"
#include "ReportFile.hpp"
#include "ReportStdout.hpp"
#include  "NumBoard.hpp"

void testBoard(Board & b) {
    ReportStdout r;
    ReportFile fic;
    std::cout << b.getTitle() << std::endl;

    b.add("item 1");
    b.add("item 2");

    r.reportStdout(b);
    fic.reportFile(b,"text.txt");
    
}

void testNumBoard(NumBoard &b) {
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

    NumBoard b1;
    NumBoard n1;

    testBoard(n1);
    testNumBoard(n1);
    
    

    return 0;
}

