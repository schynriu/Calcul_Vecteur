#include "Vecteur.h"
#include "Matrice.h"
#include <iostream>

//Ceci est un Constructeur
vect::vect(float nX, float nY, float nZ)
{
    this->moveX = nX;
    this->moveY = nY;
    this->moveZ = nZ;
}

void vect::aff() {
    std::cout << this->movenX << ", " << this->movenY << ", " << this->movenZ << std::endl;
}