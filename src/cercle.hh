//
// Created by mehdi on 08/02/2021.
//

#ifndef POSTSCRIPTTOOL_CERCLE_HH
#define POSTSCRIPTTOOL_CERCLE_HH

#define PI 3.1415

#include <ferme.hh>

class Cercle : public Ferme
{
public:
    Cercle(std::vector<Point> points);
    double longueur() override;
    Point center() override;

private:
    void add_point(Point point);
};

#endif // POSTSCRIPTTOOL_CERCLE_HH
