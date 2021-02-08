//
// Created by mehdi on 08/02/2021.
//

#include "rectangle.hh"

Rectangle::Rectangle(std::vector<Point> points)
    : Ferme(points)
{
    if (points.size() != 4)
        throw std::string("Rectangle has to be initialized with 4 points");
}
Rectangle::~Rectangle()
{}
void Rectangle::add_point(Point point)
{
    /* unreachable */
}
