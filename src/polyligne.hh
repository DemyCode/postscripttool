//
// Created by mehdi on 08/02/2021.
//

#ifndef POSTSCRIPTTOOL_POLYLIGNE_HH
#define POSTSCRIPTTOOL_POLYLIGNE_HH

#include <ouvert.hh>

class Polyligne : public Ouvert
{
public:
    Polyligne(std::vector<Point> points);
};

#endif // POSTSCRIPTTOOL_POLYLIGNE_HH
