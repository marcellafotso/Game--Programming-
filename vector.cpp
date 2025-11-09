#include "vector.h"
#include "utils.h"
#include "print.h"
#include <cmath>

// Affiche les composantes d'un vecteur
 
void afficherVecteur(Vecteur v) {
    print("Vecteur(" + std::to_string(v.x) + ", " + std::to_string(v.y) + ")");
}


 // Crée un vecteur à partir de deux points
 
Vecteur creerVecteur(Point A, Point B) {
    Vecteur v;
    v.x = B.x - A.x;
    v.y = B.y - A.y;
    return v;
}

// Additionne deux vecteurs
 
Vecteur additionVecteurs(Vecteur u, Vecteur v) {
    Vecteur resultat;
    resultat.x = u.x + v.x;
    resultat.y = u.y + v.y;
    return resultat;
}

// Soustrait deux vecteurs
 
Vecteur soustractionVecteurs(Vecteur u, Vecteur v) {
    Vecteur resultat;
    resultat.x = u.x - v.x;
    resultat.y = u.y - v.y;
    return resultat;
}

// Calcule le produit scalaire
 
double produitScalaire(Vecteur u, Vecteur v) {
    return u.x * v.x + u.y * v.y;
}

// Calcule le déterminant
 
double determinant(Vecteur u, Vecteur v) {
    return u.x * v.y - u.y * v.x;
}

// Calcule la norme d'un vecteur
 
double norme(Vecteur v) {
    return std::sqrt(v.x * v.x + v.y * v.y);
}

// Normalise un vecteur
 
Vecteur normaliser(Vecteur v) {

    double n = norme(v);
    Vecteur v_normalise;

    if (n > 0) {
        v_normalise.x = v.x / n;
        v_normalise.y = v.y / n;
    } else {
        v_normalise.x = 0;
        v_normalise.y = 0;
    }
    return v_normalise;
}
