/*
-----------------------------------------------------------------------------------
Nom du fichier  : vecteur.h
Auteur(s)       : Jérémie Santoro, Keya Dessasa
Date creation   : 08.12.2021

Description     : Cette interface permet de manipuler des vecteurs via de nombreuses
                  fonctions ainsi que l'affichage de celles-ci via un opérateur de
                  sortie.

Remarque(s)     : -

Compilateur     : Mingw-w64 g++ 11.2.0
-----------------------------------------------------------------------------------
*/

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

bool somme_min(const Vecteur& vecteur1, const Vecteur& vecteur2);

bool mini(Vecteur& vecteur1,Vecteur& vecteur2);

bool taille_min(const Vecteur& vecteur1, const Vecteur& vecteur2);

#endif //LABO7_VECTEUR_H
