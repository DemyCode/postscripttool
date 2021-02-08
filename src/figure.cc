//
// Created by mehdi on 08/02/2021.
//

#include "figure.hh"
Figure::Figure(std::vector<Point> points)
{
    points_ = points;
}

void Figure::modify_point(int i, Point point)
{
    points_[i] = point;
}

void Figure::add_point(Point point)
{
    points_.push_back(point);
}

double Figure::longueur()
{
    if (points_.size() <= 1)
        return 0;
    double d = 0;
    for (int i = 0; i < points_.size() - 1; i++)
        d += distance(points_[i], points_[i + 1]);
    return d;
}

Point Figure::center()
{
    std::vector<double> weights = std::vector<double>(points_.size(), 1);
    return barycentre(points_, weights);
}
