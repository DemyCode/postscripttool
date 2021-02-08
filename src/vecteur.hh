//
// Created by mehdi on 07/02/2021.
//

#ifndef POSTSCRIPTTOOL_VECTEUR_HH
#define POSTSCRIPTTOOL_VECTEUR_HH

#include <cmath>
#include <iostream>

class Vecteur
{
public:
    Vecteur(double x, double y);
    Vecteur operator+(const Vecteur& vecteur) const;
    Vecteur operator-(const Vecteur& vecteur) const;
    Vecteur operator*(double lambda) const;
    Vecteur operator/(double lambda) const;
    double dot(const Vecteur& vecteur) const;
    double norm() const;

    friend std::ostream& operator<<(std::ostream &ostream, const Vecteur& vecteur);

    double x_;
    double y_;
};

#endif // POSTSCRIPTTOOL_VECTEUR_HH
