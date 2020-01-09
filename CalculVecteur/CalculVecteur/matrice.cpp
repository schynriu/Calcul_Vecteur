#include "Matrice.h"
#include "Vecteur.h"
#include <iostream>

//Ceci est un Constructeur
matrice::matrice()
{
    this->tbl[0][0] = 0.0f;
    this->tbl[0][1] = 0.0f;
    this->tbl[0][2] = 0.0f;

    this->tbl[1][0] = 3.0f;
    this->tbl[1][1] = 4.0f;
    this->tbl[1][2] = 5.0f;

    this->tbl[2][0] = 33.0f;
    this->tbl[2][1] = 47.0f;
    this->tbl[2][2] = 21.0f;
}

//fct Affichage
void matrice::afficher()
{
    int ni, nj;
    std::cout << "x y z" << std::endl;
    for (ni = 0; ni < 3; ni++)
    {
        for (nj = 0; nj < 3; nj++)
        {
            std::cout << tbl[ni][nj] << " ";
        }
        std::cout << std::endl;
    }
}

//fct amie
vect matrice::prod2(vect& vect1)
{
    float nx, ny, nz;
    x = vect1.movenX + tbl[1][0];
    y = vect1.movenY + tbl[1][1];
    z = vect1.movenZ + tbl[1][2];

    vect vectSomme(nx, ny, nz);
    return vect(0, 0, 0);
}
