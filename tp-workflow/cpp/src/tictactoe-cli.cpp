#include "Tictactoe.hpp"

using namespace std;

int main() {

    Jeu jeu;
    jeu.jouer(0, 1);
    jeu.jouer(1, 1);
    cout << jeu << endl;

    return 0;
}

