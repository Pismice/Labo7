/*
-----------------------------------------------------------------------------------
Nom du fichier  : matrice.h
Auteur(s)       : Jérémie Santoro, Keya Dessasa
Date creation   : 08.12.2021

Description     : Cette interface permet de manipuler des matrices via de nombreuses
                  fonctions ainsi que l'affichage de celles-ci via un opérateur de
                  sortie.

Remarque(s)     : -

Compilateur     : Mingw-w64 g++ 11.2.0
-----------------------------------------------------------------------------------
*/

#ifndef LABO7_MATRICE_H
#define LABO7_MATRICE_H

#include <iostream>
#include "vecteur.h"

using Matrice = std::vector<Vecteur>;

std::ostream& operator<< (std::ostream& os, const Matrice& matrice);

bool estCarree(const Matrice& matrice);

bool estReguliere(const Matrice& matrice);

Vecteur sommeLigne(const Matrice& matrice);

Vecteur sommeColonne(const Matrice& matrice);

Vecteur vectSommeMin(const Matrice& matrice);

void shuffleMatrice(Matrice& matrice);

void sortMatrice(Matrice& matrice);

size_t minCol(const Matrice& matrice);

#endif //LABO7_MATRICE_H
