#ifndef VECTOR_H
#define VECTOR_H

#include "point.h"
 
struct Vecteur {
    double x;
    double y;
};

// Déclarations des fonctions
void afficherVecteur(Vecteur v);
Vecteur creerVecteur(Point A, Point B);
Vecteur additionVecteurs(Vecteur u, Vecteur v);
Vecteur soustractionVecteurs(Vecteur u, Vecteur v);
double produitScalaire(Vecteur u, Vecteur v);
double determinant(Vecteur u, Vecteur v);
double norme(Vecteur v);
Vecteur normaliser(Vecteur v);

#endif
