//
// Created by mehdi on 07/02/2021.
//

#ifndef POSTSCRIPTTOOL_POINT_HH
#define POSTSCRIPTTOOL_POINT_HH

#include <iostream>
#include <vector>
#include <map>

#include <vecteur.hh>

class Point
{
public:
    Point(double x, double y);
    Point() = default;
    Point operator+(const Vecteur& vecteur) const;
    Point operator+(const Point& point) const;
    Point operator*(double lambda) const;
    Point operator/(double lambda) const;
    Point operator-(const Vecteur& vecteur) const;
    Vecteur operator-(const Point& point) const;
    bool operator<(const Point& point) const;
    friend std::ostream& operator<<(std::ostream& ostream, const Point& point);

    double x_;
    double y_;
};

double distance(const Point& a, const Point& b);
double distance(const Point& a, const Point& b, const Point& c);
static double lerp(double v0, double v1, double t);
Point lerp(const Point& a, const Point& b, double t);
Point barycentre(const std::vector<Point>& p, const std::vector<double>& w);
Point barycentre(const std::multimap<Point, double>& pw);

#endif // POSTSCRIPTTOOL_POINT_HH
