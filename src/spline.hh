//
// Created by mehdi on 08/02/2021.
//

#ifndef POSTSCRIPTTOOL_SPLINE_HH
#define POSTSCRIPTTOOL_SPLINE_HH

#include <ouvert.hh>

class Spline : public Ouvert
{
public:
    Spline(std::vector<Point> points_);
};

#endif // POSTSCRIPTTOOL_SPLINE_HH
