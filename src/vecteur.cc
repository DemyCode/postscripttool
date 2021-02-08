//
// Created by mehdi on 07/02/2021.
//

#include "vecteur.hh"
Vecteur::Vecteur(double x, double y)
    : x_(x)
    , y_(y)
{}

Vecteur Vecteur::operator+(const Vecteur& vecteur) const
{
    return {x_ + vecteur.x_, y_ + vecteur.y_};
}

Vecteur Vecteur::operator-(const Vecteur& vecteur) const
{
    return {x_ - vecteur.x_, y_ - vecteur.y_};
}

Vecteur Vecteur::operator*(double lambda) const
{
    return {x_ * lambda, y_ * lambda};
}

Vecteur Vecteur::operator/(double lambda) const
{
    return {x_ / lambda, y_ / lambda};
}

double Vecteur::dot(const Vecteur& vecteur) const
{
    return x_ * vecteur.x_ + y_ * vecteur.y_;
}

double Vecteur::norm() const
{
    return std::sqrt(dot(*this));
}

std::ostream& operator<<(std::ostream& ostream, const Vecteur& vecteur)
{
    return ostream << '[' << vecteur.x_ << ", " << vecteur.y_ << ']';
}