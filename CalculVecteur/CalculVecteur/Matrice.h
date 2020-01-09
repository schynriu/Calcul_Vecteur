#pragma once
#include "vect.h"

class matrice
{
private:
    float tbl[3][3];

public:
    //Ceci est un Constructeur
    matrice();

    //fct Affichage
    void afficher();

    //fct amie produit 
    vect prod2(vect& vect1);
}