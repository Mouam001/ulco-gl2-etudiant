#include "Tictactoe.hpp"
#include <iostream>

Jeu::Jeu() {
    raz();
}

Status Jeu::getStatus() const {
    for (int i = 0; i < 3; ++i) {
            // Vérification des lignes
            if (_plateau[i][0] != Cell::Vide && _plateau[i][0] == _plateau[i][1] && _plateau[i][1] == _plateau[i][2]) {
                return (_plateau[i][0] == Cell::Rouge) ? Status::RougeGagne : Status::VertGagne;
            }
            // Vérification des colonnes
            if (_plateau[0][i] != Cell::Vide && _plateau[0][i] == _plateau[1][i] && _plateau[1][i] == _plateau[2][i]) {
                return (_plateau[0][i] == Cell::Rouge) ? Status::RougeGagne : Status::VertGagne;
            }
        }
        // Vérification des diagonales
        if (_plateau[0][0] != Cell::Vide && _plateau[0][0] == _plateau[1][1] && _plateau[1][1] == _plateau[2][2]) {
            return (_plateau[0][0] == Cell::Rouge) ? Status::RougeGagne : Status::VertGagne;
        }
        if (_plateau[0][2] != Cell::Vide && _plateau[0][2] == _plateau[1][1] && _plateau[1][1] == _plateau[2][0]) {
            return (_plateau[0][2] == Cell::Rouge) ? Status::RougeGagne : Status::VertGagne;
        }

        // Vérifier s'il y a égalité
        bool isFull = true;
        for (const auto& row : _plateau) {
            for (const auto& cell : row) {
                if (cell == Cell::Vide) {
                    isFull = false;
                    break;
                }
            }
            if (!isFull) {
                break;
            }
        }
        if (isFull) {
            return Status::Egalite;
        }

        // Si aucun des cas précédents n'est rencontré, retourner le statut du joueur suivant en fonction du nombre de cases vides
        int countRouge = 0, countVert = 0;
        for (const auto& row : _plateau) {
            for (const auto& cell : row) {
                if (cell == Cell::Rouge) {
                    ++countRouge;
                } else if (cell == Cell::Vert) {
                    ++countVert;
                }
            }
        }
        return (countRouge <= countVert) ? Status::RougeJoue : Status::VertJoue;
}


Cell Jeu::getCell(int i, int j) const {
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
            case Cell::Vide : os << "*";
                break;
            
            default: os << "*";
                    break;
            }
        }
         os << std::endl;
    }
    return os;
}



bool Jeu::jouer(int i, int j) {
    if(_plateau[i][j] == Cell::Vide){
        if(getStatus() == Status::RougeJoue){
            _plateau[i][j] = Cell::Rouge;
            return true;
        }
        else if(getStatus()== Status::VertJoue){
            _plateau[i][j] = Cell::Vert;
            return true;
        }
    }
}

void Jeu::raz() {
    for(int i =0; i < _plateau.size(); i++){
        for(int j = 0; j < _plateau.size(); j++){
            _plateau[i][j] = Cell::Vide;
        }
    }
}


bool Jeu::playerWin(const Jeu& jeu) {
    for(int i = 0; i < 3; i++) {
        // Vérification des lignes
        if(jeu.getCell(i, 0) != Cell::Vide && jeu.getCell(i, 0) == jeu.getCell(i, 1) && jeu.getCell(i, 1) == jeu.getCell(i, 2)) {
            return true;
        }

        // Vérification des colonnes
        if(jeu.getCell(0, i) != Cell::Vide && jeu.getCell(0, i) == jeu.getCell(1, i) && jeu.getCell(1, i) == jeu.getCell(2, i)) {
            return true;
        }
    }

    // Vérification de la diagonale principale (de gauche à droite)
    if(jeu.getCell(0, 0) != Cell::Vide && jeu.getCell(0, 0) == jeu.getCell(1, 1) && jeu.getCell(1, 1) == jeu.getCell(2, 2)) {
        return true;
    }

    // Vérification de la diagonale secondaire (de droite à gauche)
    if(jeu.getCell(0, 2) != Cell::Vide && jeu.getCell(0, 2) == jeu.getCell(1, 1) && jeu.getCell(1, 1) == jeu.getCell(2, 0)) {
        return true;
    }

    return false;
}



bool Jeu::playerEquality(const Jeu& jeu){
    for(int i = 0; i < _plateau.size(); i++){
        for(int j = 0; j < _plateau.size(); j++){
            if(jeu.getCell(i, j) == Cell::Vide){
                return false;
            }
        }
    }
    return true;
}
