#include <iostream>
#include <cstdlib>
#include "Vecteur.h"
#include "Matrice.h"


int main()
{
    matrice maMatrice;
    maMatrice.afficher();

    vect vT1(1, 0, 0);
    vect vT2(2, 0, 0);

    vect vT3(0, 0, 0);
    
    system("pause");
    return 0;
}
