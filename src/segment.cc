//
// Created by mehdi on 08/02/2021.
//

#include "segment.hh"
Segment::Segment(std::vector<Point> points)
    : Ouvert(points)
{
    if (points.size() != 2)
        throw std::string("Segment is composed of two points");
}
