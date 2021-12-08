//
// Created by pismice on 08.12.2021.
//

#include "matrice.h"
#include "vecteur.h"

using namespace std;

Vecteur sommeLigne(const Matrice& matrice)
{
   Vecteur vecteur(matrice.size());
   transform(matrice.begin(), matrice.end(), vecteur.begin(), somme);

   return vecteur;
}

