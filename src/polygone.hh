//
// Created by mehdi on 08/02/2021.
//

#ifndef POSTSCRIPTTOOL_POLYGONE_HH
#define POSTSCRIPTTOOL_POLYGONE_HH

#include <ferme.hh>

class Polygone : public Ferme
{
public:
    Polygone(std::vector<Point> points);
};

#endif // POSTSCRIPTTOOL_POLYGONE_HH
