#include "Itemable.hpp"

class Titleable{

    public : 
        virtual ~Titleable() = default;
        virtual std::string getTitle() const = 0;

};