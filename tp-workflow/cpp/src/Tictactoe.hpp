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
        
        /// @brief permet de creer le jouer et verifier le status du plateau ? plein:egalité
        Cell _player;
        Status _status;
        

    public:
        /// \brief contructeur principale du jeu.
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

        /// \brief cette methode permet de verifier s'il ya un jouer gagnant
        /// \details parcours le plateau et voie s'il y a des joueurs aligné sur la meme ligne et le jeu s'arrete
        bool playerWin(const Jeu &jeu);

        /// \brief cette methode permet de verifier s'il ya egalité 
        /// \details parcours le plateau et voie s'il y a pas des joueurs aligné sur la meme ligne
        bool playerEquality(const Jeu &jeu);

        /// \addindex permet de recuperer le joueur
        Cell getplayer(){
            return _player;
        }
};

std::ostream & operator<<(std::ostream & os, const Jeu & jeu);

#endif

