#ifndef TICTACTOE_HPP
#define TICTACTOE_HPP

#include <array>
#include <iostream>

enum class Status { Egalite, RougeGagne, VertGagne, RougeJoue, VertJoue };

enum class Cell { Vide, Rouge, Vert };

/// \brief Moteur de jeu de tictactoe.
class Jeu {
    private:
        std::array<std::array<Cell, 3>, 3> _plateau;
        // TODO
        Cell _player;
        Status _status;

    public:
        // Constructeur à utiliser.
        Jeu();

        /// \brief Retourne le status du jeu courant (Egalite, RougeGagne, VertGagne, RougeJoue, VertJoue).
        Status getStatus() const;

        /// \brief Retourne l'état d'une case du plateau
        Cell getCell(int i, int j) const;

        /// Joue un coup pour le joueur courant.
        // 
        // i ligne choisie (0, 1 ou 2)
        // j colonne choisie (0, 1 ou 2)
        // 
        /// \brief Si le coup est invalide, retourne false. Si le coup est valide,
        /// \brief joue le coup et retourne true.
        bool jouer(int i, int j);

        /// \brief permet de reinitialiser le jeu Réinitialise le jeu.
        void raz();
        Cell getplayer(){
            return _player;
        }
};

std::ostream & operator<<(std::ostream & os, const Jeu & jeu);

#endif

