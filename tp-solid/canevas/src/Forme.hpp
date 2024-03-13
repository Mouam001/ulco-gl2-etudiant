#pragma once

#include <cmath>
#include <numeric>
class Forme {
    public:
        virtual ~Forme() = default;
        virtual double aire()  const = 0;
};

class Disque : public Forme {
    public:
        double _rayon;
        Disque(double rayon);
         double aire() const;
};

class Rectangle : public Forme {
    public:
        double _largeur;
        double _hauteur;
        Rectangle(double largeur, double hauteur);
        double aire() const;
};

