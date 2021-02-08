//
// Created by mehdi on 08/02/2021.
//

#ifndef POSTSCRIPTTOOL_SEGMENT_HH
#define POSTSCRIPTTOOL_SEGMENT_HH

#include <ouvert.hh>

class Segment : public Ouvert
{
public:
    Segment(std::vector<Point> points);
};

#endif // POSTSCRIPTTOOL_SEGMENT_HH
