#ifndef POINT_H
#define POINT_H


struct Point {
    double x;
    double y;
};

// Déclarations des fonctions
void afficherPoint(Point p);
Point translation(Point p, struct Vecteur v);
Point scale(Point p, double facteur);
Point rotation(Point p, double angleRadians);

#endif
