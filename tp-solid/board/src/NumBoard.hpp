#include "Board.hpp"

class NumBoard : public Board{
     private :
        int addNum = 0;
     public :
     void add_num(const std::string &item){

         std::string numberConvert =  std::to_string(addNum++) + "."+ item;
         add(numberConvert);
     }

};



