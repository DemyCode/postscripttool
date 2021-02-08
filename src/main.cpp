#include <cercle.hh>
#include <iostream>
#include <point.hh>
#include <rectangle.hh>
#include <vecteur.hh>

#include <polyligne.hh>

int main()
{
    // Exercice 1
    std::cout << "Exercice 1" << std::endl;
    Point p1(1, 2);
    std::cout << "p1 = " << p1 << std::endl;
    Vecteur v1(3, 4);
    std::cout << "v1 = " << v1 << std::endl;
    std::cout << "p1 + v1 == " << p1 + v1 << std::endl;
    std::cout << "p1 - v1 == " << p1 - v1 << std::endl;
    Point p2(5, 6);
    std::cout << "p2 = " << p2 << std::endl;
    std::cout << "p1 - p2 == " << p1 - p2 << std::endl;
    Vecteur v2(7, 8);
    std::cout << "v2 = " << v2 << std::endl;
    std::cout << "v1 + v2 == " << v1 + v2 << std::endl;
    std::cout << "v1 - v2 == " << v1 - v2 << std::endl;
    std::cout << "v1 * 9 == " << v1 * 9 << std::endl;
    std::cout << "v1 / 10 == " << v1 / 10 << std::endl;

    // Exercice 2
    std::cout << "Exercice 2" << std::endl;
    Point upleft = Point(0, 0);
    Point upright = Point(5, 0);
    Point downleft = Point(0, 10);
    Point downright = Point(5, 10);
    std::cout << "Rectangle : " << upleft << upright << downleft << downright << std::endl;
    std::cout << "Diagonal : " << upleft << downright << std::endl;
    for (int i = 0; i <= 10; i++)
        std::cout << lerp(upleft, downright, 0.1 * (double)i) << std::endl;

    // Exercice 3
    std::cout << "Exercice 2" << std::endl;
    upleft = Point(0, 0);
    upright = Point(10, 0);
    downleft = Point(0, 10);
    downright = Point(10, 10);
    std::cout << "Points : ";
    const std::vector<Point>& p = {upleft, upright, downleft, downright};
    for (auto cur_p : p)
        std::cout << cur_p << " ";
    std::cout << std::endl;
    std::cout << "Weights : ";
    const std::vector<double>& w = {1, 1, 1, 1};
    for (auto cur_w : w)
        std::cout << cur_w << " ";
    std::cout << std::endl;
    std::cout << "Barycentre Vector : " << barycentre(p, w) << std::endl;
    const std::multimap<Point, double>& pw = {std::pair<Point, double>(upleft, 1),
                                              std::pair<Point, double>(upright, 1),
                                              std::pair<Point, double>(downleft, 1),
                                              std::pair<Point, double>(downright, 1)};
    std::cout << "Multimap : ";
    for (auto cur_p : pw)
        std::cout << cur_p.first << " " << cur_p.second << ", ";
    std::cout << std::endl;
    std::cout << "Barycentre Multimap : " << barycentre(pw) << std::endl;

    // Exerice 4
    std::cout << "Exercice 4" << std::endl;
    std::vector<Point> pointscercles = std::vector<Point>();
    pointscercles.emplace_back(0, 0);
    pointscercles.emplace_back(1, 1);
    Cercle cercle = Cercle(pointscercles);
    Rectangle rectangle = Rectangle(pointscercles);
    // Figure figure = Figure(pointscercles);
    Polyligne polyligne = Polyligne(pointscercles);


    return 0;
}
