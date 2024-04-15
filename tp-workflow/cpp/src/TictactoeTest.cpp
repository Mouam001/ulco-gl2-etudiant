#include "Tictactoe.hpp"
#include <sstream>

#include <catch2/catch.hpp>

TEST_CASE("test bidon") { 
    REQUIRE( true );
}


    // TODO
TEST_CASE("Initialisation du jeu"){
    Jeu jeu;
    for (int i = 0; i < 3; i ++){
        for(int j = 0; j < 3; j++){
            REQUIRE(jeu.getCell(i, j)== Cell::Vide);
        }
    }
}

TEST_CASE("affichage du plateau") { 
    Jeu jeu;
    std::ostringstream oss;
    oss << jeu;
    auto display = "***\n***\n***\n";
    REQUIRE(oss.str() == display);
    
}


