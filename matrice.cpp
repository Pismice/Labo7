//
// Created by pismice on 08.12.2021.
//

#include "matrice.h"
#include "vecteur.h"
#include <algorithm>

using namespace std;

void plusGrandeValeur(Vecteur v)
{
   v.size();
}

Vecteur sommeLigne(const Matrice& matrice)
{
   // La taille du vecteur correspond au nombre de vecteurs (lignes) dans la matrice
   Vecteur reponse(matrice.size());

   transform(matrice.begin(), matrice.end(), reponse.begin(), somme);

   return reponse;
}

Vecteur sommeColonne(const Matrice& matrice)
{
   // Trouver le plus grand vecteur de la matrice
   // for_each(matrice.begin(), matrice.end(), plusGrandeValeur);
   Vecteur longeurDesLignes(matrice.size());


   // TODO: LA TAILLE DE REPONSE DOIT CORRESPONDRE AU PLUS LONG VECTEUR
   Vecteur reponse(matrice.size());



   return reponse;
}

