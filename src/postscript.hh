//
// Created by mehdi on 08/02/2021.
//

#ifndef POSTSCRIPTTOOL_POSTSCRIPT_HH
#define POSTSCRIPTTOOL_POSTSCRIPT_HH

#include <string>
#include <fstream>

class Postscript
{
public:
    Postscript(std::string filename);
    ~Postscript();
    std::ofstream file_;
};

#endif // POSTSCRIPTTOOL_POSTSCRIPT_HH
