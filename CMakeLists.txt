cmake_minimum_required(VERSION 3.17)
project(PostScriptTool)

set(CMAKE_CXX_STANDARD 14)

include_directories(src)

add_executable(PostScriptTool src/main.cpp src/point.cc src/point.hh src/vecteur.cc src/vecteur.hh src/figure.cc src/figure.hh src/ouvert.cc src/ouvert.hh src/ferme.cc src/ferme.hh src/segment.cc src/segment.hh src/polyligne.cc src/polyligne.hh src/spline.cc src/spline.hh src/cercle.cc src/cercle.hh src/rectangle.cc src/rectangle.hh src/polygone.cc src/polygone.hh src/postscript.cc src/postscript.hh)