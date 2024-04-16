#include "Tictactoe.hpp"

using namespace std;

int main() {

    Jeu jeu;
    std::cout << "*** Debut du Jeu !\n";
    while(true){
        std::cout<< " etat du plateau du jeu\n"<< jeu;

        int i, j;
        std::cout << " Jouer "<< ((jeu.getStatus() == Status::RougeJoue) ? "Rouge": "Vert")<< ", Entrer la position ";
        std::cin>> i >> j;
        if (i < 0 || i >= 3 || j < 0 || j >= 3){
            std::cout<< " position invalide! Ressayer entre 0 et 2\n";
            continue;
        }
        if(!jeu.jouer(i, j)){
            std::cout<< " La case est deja occupé\n";
            continue;
        }

        if(jeu.playerWin(jeu)){
            std::cout << " Jouer "<< ((jeu.getStatus() == Status::RougeJoue) ? "Rouge": "Vert") << " à Gagné!\n";
            std::cout<<jeu<<std::endl;
            break;
        }

       if(jeu.playerEquality(jeu)){
            std::cout << " Match null\n";
            std::cout<<jeu<<std::endl;
            break;
        }
    }
    // jeu.jouer(0, 1);
    // jeu.jouer(1, 1);
    // cout << jeu << endl;

    return 0;
}

