
#include "Board.hpp"
#include "ReportFile.hpp"
#include "ReportStdout.hpp"

void testBoard(Board & b) {
    ReportStdout r;
    std::cout << b.getTitle() << std::endl;
    b.add("item 1");
    b.add("item 2");
    r.reportStdout(b);
    
}

int main() {

    Board b1;
    testBoard(b1);
    ReportFile fic;
    fic.reportFile(b1,"text.txt");

    return 0;
}

