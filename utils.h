#ifndef UTILS_H
#define UTILS_H

#include "point.h"
#include "vector.h"

// Constantes mathématiques utiles
#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

// Fonctions utilitaires
double degresEnRadians(double degres);
double radiansEnDegres(double radians);
double distanceEntrePoints(Point A, Point B);

#endif
