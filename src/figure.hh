//
// Created by mehdi on 08/02/2021.
//

#ifndef POSTSCRIPTTOOL_FIGURE_HH
#define POSTSCRIPTTOOL_FIGURE_HH

#include <point.hh>

class Figure
{
protected:
    Figure(std::vector<Point> points);

public:
    void modify_point(int i, Point point);
    virtual double longueur();
    virtual Point center();
    virtual void add_point(Point point);
    std::vector<Point> points_;
};

#endif // POSTSCRIPTTOOL_FIGURE_HH