#include "Tictactoe.hpp"

using namespace std;

int main() {

    Jeu jeu;
    std::cout << "^^^Debut du Jeu^^^!\n";

    // implementons le deroulement du jeu
    while(true ){
       std::cout<< " Affichage état du plateau \n"<< jeu <<std::endl;
       int i, j;
       std::cout<< " jouer "<< ((jeu.getStatus() == Status::RougeJoue) ? " Rouge" : "Vert" )<< " Donner la position i, j: ";
       std::cin>> i >> j;

       if(i < 0 || j < 0 || i > 2 || j > 2){
            std::cout<<" Position invalide ! Ressayer"<< std::endl;
            continue;
       }

       if(!jeu.jouer(i, j)){
            std::cout<<" Case deja jouée ! Ressayer"<< std::endl;
            continue;
       }

       if(jeu.playerWin(jeu)){
             std::cout<< jeu<< std::endl;
             std::cout<< " jouer "<< ((jeu.getStatus() == Status::RougeJoue) ? " Rouge" : "Vert" )<< " a gagné "<<std::endl;
             break;
       }

        if(jeu.playerEquality(jeu)){
             std::cout<< " Match null \n"<<endl;
             std::cout<< jeu<< std::endl;
             break;
       }
    }


    return 0;
}

/*std::cout<< jeu<<std::endl;
    std::cout << " donner une position entre 0 à 2 avec espace : ";
    std::cin>> i >> j;
    jeu.jouer(i, j);
    std::cout<< jeu<<std::endl;*/
