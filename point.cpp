#include "point.h"
#include "vector.h"
#include "utils.h"
#include "print.h"
#include <cmath>

 
void afficherPoint(Point p) {
    print("Point(" + std::to_string(p.x) + ", " + std::to_string(p.y) + ")");
}


// Applique une translation à un point
 
Point translation(Point p, Vecteur v) {
    Point point_traduit;
    point_traduit.x = p.x + v.x;
    point_traduit.y = p.y + v.y;
    return point_traduit;
}

// Applique un scale (homothétie) à un point
 
Point scale(Point p, double facteur) {
    Point point_scale;
    point_scale.x = p.x * facteur;
    point_scale.y = p.y * facteur;
    return point_scale;
}


Point rotation(Point p, double angleRadians) {
    Point point_tourne;
    double cosA = std::cos(angleRadians);
    double sinA = std::sin(angleRadians);

    point_tourne.x = p.x * cosA - p.y * sinA;
    point_tourne.y = p.x * sinA + p.y * cosA;
    
    return point_tourne;
}
