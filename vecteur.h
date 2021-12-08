//
// Created by pismice on 08.12.2021.
//

#ifndef LABO7_VECTEUR_H
#define LABO7_VECTEUR_H

// TODO : redondance de iostream car aussi dans matrice.h ?
#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>

using Vecteur = std::vector<int>;

std::ostream& operator <<(std::ostream& os, const Vecteur& vecteur);

int somme(const Vecteur& vecteur);

#endif //LABO7_VECTEUR_H
