#include <fstream>
#include <functional>
#include <iostream>

using logFunc_t = std::function<void(const std::string &)>;

int add3(int n) {
    return n+3;
}

int mul2(int n) {
    return n*2;
}



int computeLog(logFunc_t  logger, int v0){
    logger("add3 " + std::to_string(v0)+ "\n");
    const int v1 = add3(v0);
    logger("mul2 " + std::to_string(v1) + "\n") ;
    const int v2 = add3(v1);
    return v2;
}

void display(const std:: string & str){
    std::cout<<str;
}
int main() {
    std::cout << "this is log-cpp" << std::endl;
    const int res = computeLog(display, 18);
    std::cout<< res <<std::endl;

    logFunc_t fonc =[](const std::string & str){
        std::cout<<str;
    };
    
    return 0;
}

