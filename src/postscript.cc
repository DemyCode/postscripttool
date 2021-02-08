//
// Created by mehdi on 08/02/2021.
//

#include "postscript.hh"
Postscript::Postscript(std::string filename)
{
    file_.open(filename);
    
}

Postscript::~Postscript()
{
    file_.close();
}
