//
// Created by mehdi on 08/02/2021.
//

#ifndef POSTSCRIPTTOOL_RECTANGLE_HH
#define POSTSCRIPTTOOL_RECTANGLE_HH

#include <ferme.hh>

class Rectangle : public Ferme
{
public:
    Rectangle(std::vector<Point> points);
    virtual ~Rectangle();

private:
    void add_point(Point point); /* unreachable */
};

#endif // POSTSCRIPTTOOL_RECTANGLE_HH
