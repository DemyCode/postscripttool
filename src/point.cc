//
// Created by mehdi on 07/02/2021.
//

#include "point.hh"
Point::Point(double x, double y)
    : x_(x)
    , y_(y)
{}

Point Point::operator+(const Vecteur& vecteur) const
{
    return {x_ + vecteur.x_, y_ + vecteur.y_};
}

Point Point::operator+(const Point& point) const
{
    return {x_ + point.x_, y_ + point.y_};
}

Point Point::operator-(const Vecteur& vecteur) const
{
    return {x_ - vecteur.x_, y_ - vecteur.y_};
}

Vecteur Point::operator-(const Point& point) const
{
    return {x_ - point.x_, y_ - point.y_};
}

std::ostream& operator<<(std::ostream& ostream, const Point& point)
{
    return ostream << '(' << point.x_ << ", " << point.y_ << ')';
}
Point Point::operator*(double lambda) const
{
    return {x_ * lambda, y_ * lambda};
}

Point Point::operator/(double lambda) const
{
    return {x_ / lambda, y_ / lambda};
}
bool Point::operator<(const Point& point) const
{
    return distance(Point(0, 0), *this) < distance(Point(0, 0), point);
}

double distance(const Point& a, const Point& b)
{
    return (b - a).norm();
}

double distance(const Point& a, const Point& b, const Point& c)
{
    // x1 == b.x_, y1 == b.y_, x2 = c.x_, y2 = c.y_, x0 == a.x_, y0 == a.y_
    double num = std::abs((c.x_ - b.x_) * (b.y_ - a.y_) - (b.x_ - a.x_) * (c.y_ - b.y_));
    double denum = std::sqrt(std::pow(c.x_ - b.x_, 2) + std::pow(c.y_ - b.y_, 2));
    return num / denum;
}

static double lerp(double v0, double v1, double t)
{
    return (1 - t) * v0 + t * v1;
}

Point lerp(const Point& a, const Point& b, double t)
{
    return {lerp(a.x_, b.x_, t), lerp(a.y_, b.y_, t)};
}

Point barycentre(const std::vector<Point>& p, const std::vector<double>& w)
{
    Point acc = Point(0, 0);
    double weightacc = 0;
    for (int i = 0; i < p.size(); ++i)
    {
        acc = acc + p[i] * w[i];
        weightacc += w[i];
    }
    return acc / weightacc;
}

Point barycentre(const std::multimap<Point, double>& pw)
{
    Point acc = Point(0, 0);
    double weightacc = 0;
    for (const auto & itr : pw)
    {
        acc = acc + itr.first * itr.second;
        weightacc += itr.second;
    }
    return acc / weightacc;
}