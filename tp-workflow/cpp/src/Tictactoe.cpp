#include "Tictactoe.hpp"
#include <iostream>

Jeu::Jeu() {
    raz();
}

Status Jeu::getStatus() const {
    // TODO
    return Status::RougeJoue;
}

Cell Jeu::getCell(int i, int j) const {
    // TODO
    return _plateau[i][j];
}

std::ostream & operator<<(std::ostream & os, const Jeu & jeu) {
    for(int i=0; i < 3; i ++){
        for(int j=0; j < 3; j ++){
            switch (jeu.getCell(i, j)){
            
            case Cell::Rouge : os << "R";
                break;
            case Cell::Vert : os << "V";
                break;

            // case Cell::Vide : os << "*";
            //     break;
            
            default: os << "*";
                    break;
            }
        }
         os << std::endl;
    }
    return os;
}



bool Jeu::jouer(int i, int j) {
    // TODO

    return false;
}


void Jeu::raz() {
    // TODO
    for(int i =0; i < _plateau.size(); i++){
        for(int j = 0; j < _plateau.size(); j++){
            _plateau[i][j] = Cell::Vide;
        }
    }
}

