#include "utils.h"
#include <cmath>



double degresEnRadians(double degres) {
    return degres * M_PI / 180.0;
}


double radiansEnDegres(double radians) {
    return radians * 180.0 / M_PI;
}


double distanceEntrePoints(Point A, Point B) {
    Vecteur v = creerVecteur(A, B);
    return norme(v);
}
