#include "Forme.hpp"

Disque::Disque(double rayon) :
    _rayon(rayon)
{}

Rectangle::Rectangle(double largeur, double hauteur) :
    _largeur(largeur), _hauteur(hauteur)
{}

double Disque::aire() const{
    return _rayon * 2 * M_PI;
}

double Rectangle::aire() const{
    return _largeur * _hauteur;
}