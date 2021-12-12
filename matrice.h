/*
-----------------------------------------------------------------------------------
Nom du fichier  : matrice.h
Auteur(s)       : Jérémie Santoro, Keya Dessasa
Date creation   : 08.12.2021

Description     : Cette interface permet de manipuler des matrices via de nombreuses
                  fonctions ainsi que l'affichage de celles-ci via un opérateur de
                  sortie. Il est également possible de manipuler les vecteurs
                  et de les afficher

Remarque(s)     : -

Compilateur     : Mingw-w64 g++ 11.2.0
-----------------------------------------------------------------------------------
*/

#ifndef LABO7_MATRICE_H
#define LABO7_MATRICE_H

#include <iostream>
#include "vecteur.h"

using Vecteur = std::vector<int>;
using Matrice = std::vector<Vecteur>;


// Manipulation des matrices -----------------------------------------------------

std::ostream& operator<< (std::ostream& os, const Matrice& matrice);

bool estCarree(const Matrice& matrice);

bool estReguliere(const Matrice& matrice);

Vecteur sommeLigne(const Matrice& matrice);

Vecteur sommeColonne(const Matrice& matrice);

Vecteur vectSommeMin(const Matrice& matrice);

void shuffleMatrice(Matrice& matrice);

void sortMatrice(Matrice& matrice);

size_t minCol(const Matrice& matrice);


// Manipulation des vecteurs ----------------------------------------------------

std::ostream& operator <<(std::ostream& os, const Vecteur& vecteur);

int somme(const Vecteur& vecteur);

bool somme_min(const Vecteur& vecteur1, const Vecteur& vecteur2);

bool mini(Vecteur& vecteur1,Vecteur& vecteur2);

bool taille_min(const Vecteur& vecteur1, const Vecteur& vecteur2);

#endif //LABO7_MATRICE_H
