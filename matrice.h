//
// Created by pismice on 08.12.2021.
//

#ifndef LABO7_MATRICE_H
#define LABO7_MATRICE_H

// TODO: REFLECHIR SI IL FAUT LAISSER L INCLUDE ICI AINSI QUE LES USING
#include <vector>
#include <iostream>
// using Vecteur = std::vector<int>; // TODO: ?
using Matrice = std::vector<std::vector<int>>;

std::ostream& operator<< (std::ostream& os, const Matrice& matrice);

bool estCarree(const Matrice& matrice);

bool estReguliere(const Matrice& matrice);

int minCol(const Matrice&);

std::vector<int> sommeLigne(const Matrice& matrice);

std::vector<int> sommeColonne(const Matrice& matrice);

std::vector<int> vectSommeMin(const Matrice& matrice);

// TODO : tester le & si necessaire ou pas
void shuffleMatrice(Matrice& matrice);

void sortMatrice(Matrice& matrice);

#endif //LABO7_MATRICE_H
