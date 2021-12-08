//
// Created by pismice on 08.12.2021.
//

#ifndef LABO7_MATRICE_H
#define LABO7_MATRICE_H

// TODO: REFLECHIR SI IL FAUT LAISSER L INCLUDE ICI AINSI QUE LES USING
#include <iostream>
#include "vecteur.h"
using Matrice = std::vector<Vecteur>;

std::ostream& operator<< (std::ostream& os, const Matrice& matrice);

bool estCarree(const Matrice& matrice);

bool estReguliere(const Matrice& matrice);

int minCol(const Matrice&);

Vecteur sommeLigne(const Matrice& matrice);

Vecteur sommeColonne(const Matrice& matrice);

Vecteur vectSommeMin(const Matrice& matrice);

// TODO : tester le & si necessaire ou pas
void shuffleMatrice(Matrice& matrice);

void sortMatrice(Matrice& matrice);

#endif //LABO7_MATRICE_H
