#pragma once

#include "Itemable.hpp"
#include "Titleable.hpp"

#include <fstream>
#include <iostream>

// Heritage multiplie => on peut dire interface, abstraite mais en relaité 
// il n ya pas d'interface en c++ avec des methodes abstraite => Virtual
class Board : public Itemable, public Titleable{
    private:
        std::vector<std::string> _tasks;

    public:
       
        void add(const std::string & t) {
            _tasks.push_back(t);
        }

        std::vector<std::string> getItems() const override {
            return _tasks;
        }

        virtual std::string getTitle() const override {
            return "Board";
        }

};

