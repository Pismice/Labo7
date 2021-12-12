/*
-----------------------------------------------------------------------------------
Nom du fichier  : matrice.h
Auteur(s)       : Jérémie Santoro, Keya Dessasa
Date creation   : 08.12.2021

Description     : Cette interface permet de manipuler des matrices via de nombreuses
                  fonctions ainsi que l'affichage de celles-ci via un opérateur de
                  sortie. Il est également possible de manipuler les vecteurs
                  et de les afficher

Remarque(s)     : Nous désirions faire 2 librairies : 1 pour les matrices et 1 pour
                  les vecteurs (lignes), mais comme stipulé dans la donnée nous avons
                  finalement tout mis dans une seule librairie

Compilateur     : Mingw-w64 g++ 11.2.0
-----------------------------------------------------------------------------------
*/

#ifndef LABO7_MATRICE_H
#define LABO7_MATRICE_H

#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>

using Vecteur = std::vector<int>;
using Matrice = std::vector<Vecteur>;


// Manipulation des matrices -----------------------------------------------------

/**
 * Permet d'afficher une matrice
 * @param os Flux de sortie
 * @param matrice Matrice à afficher
 * @return Flux de sortie
 */
std::ostream& operator<< (std::ostream& os, const Matrice& matrice);

/**
 * Test si la matrice passée en paramètre est carrée
 * @param matrice Matrice testée
 * @return Retourne vrai si celle-ci est carrée
 */
bool estCarree(const Matrice& matrice);

/**
 * Test si la matrice est régulière
 * @param matrice Matrice testée
 * @return Retourne vrai si celle-ci est régulière
 */
bool estReguliere(const Matrice& matrice);

/**
 * Retourne la somme de chaque ligne de la matrice
 * @param matrice Matrice utilisée
 * @return Vecteur la somme de chaque ligne de la matrice
 */
Vecteur sommeLigne(const Matrice& matrice);

/**
 * Retourne la somme de chaque colonne de la matrice
 * Remarques: on a décidé de passer en copie 
 * @param matrice Matrice utilisée
 * @return Vecteur la somme de chaque colonne de la matrice
 */
Vecteur sommeColonne(Matrice matrice);

/**
 * Retourne la ligne d'une matrice dont la somme est la plus faible
 * @param matrice Matrice utlisée
 * @return Vecteur dont la somme est la plus faible
 */
Vecteur vectSommeMin(const Matrice& matrice);

/**
 * Mélange aléatoirement les lignes d'une matrice (sans modifier les lignes)
 * @param matrice Matrice utlisée
 */
void shuffleMatrice(Matrice& matrice);

/**
 * Trie les lignes d'une matrice dans l'ordre croissant en fonction de l'élément le
 * plus petit de chaque ligne
 * @param matrice Matrice utlisée
 */
void sortMatrice(Matrice& matrice);

/**
 * Retourne la taille de la plus petite ligne de la matrice
 * @param matrice Matrice utlisée
 * @return Taille de la ligne
 */
size_t minCol(const Matrice& matrice);


// Manipulation des vecteurs ----------------------------------------------------

/**
 * Permet d'afficher un vecteur
 * @param os Flux de sortie
 * @param matrice Vecteur à afficher
 * @return Flux de sortie
 */
std::ostream& operator <<(std::ostream& os, const Vecteur& vecteur);

#endif //LABO7_MATRICE_H
