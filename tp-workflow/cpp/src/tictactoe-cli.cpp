#include "Tictactoe.hpp"

using namespace std;

int main() {

    Jeu jeu;
    int i, j;
    std::cout << "*** Debut du Jeu !\n";
    std::cout<< jeu<<std::endl;
    std::cout << " donner une position entre 0 à 2 avec espace : ";
    std::cin>> i >> j;

    jeu.jouer(i, j);
    std::cout<< jeu<<std::endl;
    // jeu.jouer(1, 1);
    // cout << jeu << endl;

    return 0;
}

