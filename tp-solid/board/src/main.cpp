
#include "Board.hpp"
#include "ReportFile.hpp"
#include "ReportStdout.hpp"
#include  "NumBoard.hpp"
#include "Reportable.hpp"

void testBoard(Board & b,Reportable& r) {
    
    std::cout << b.getTitle() << std::endl;

    b.add("item 1");
    b.add("item 2");

    r.report(b);
    
    
}

void testNumBoard(NumBoard &b, Reportable& fic) {
    ReportStdout r;
   
    std::cout << b.getTitle() << std::endl;
    b.add_num("item");
    b.add_num("item");
    b.add_num("item");
    b.add_num("item");
    b.add_num("item");
    
    fic.report(b);
    r.report(b);
    
}

int main() {

    ReportStdout r;
    ReportFile f;
    Board b1;
    NumBoard n1;

    testBoard(b1, r);
    testNumBoard(n1, f);
    
    

    return 0;
}

