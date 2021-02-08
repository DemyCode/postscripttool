//
// Created by mehdi on 08/02/2021.
//

#include "cercle.hh"

Cercle::Cercle(std::vector<Point> points)
    : Ferme(points)
{
    if (points.size() != 2)
        throw std::string("Cercle créé uniquement à partir de 2 points");
}

double Cercle::longueur()
{
    return PI * 2 * distance(points_[0], points_[1]);
}

Point Cercle::center()
{
    return points_[0];
}

void Cercle::add_point(Point point)
{
    /* unreachable */
}