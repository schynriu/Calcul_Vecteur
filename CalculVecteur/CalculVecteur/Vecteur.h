#pragma once
#include "Matrice.h"
class vect
{
  
private:
    float movenX;
    float movenY;
    float movenZ;

public:
    //Ceci est le constructeur
    vect(float, float, float);

    void aff();

    //Ceci est la liaison amie
    friend vect matrice::prod2(vect& vect1);


}; #pragma once
