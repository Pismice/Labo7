/*
-----------------------------------------------------------------------------------
Nom du fichier  : <nom du fichier>.<xxx> (xxx = h ou cpp)
Auteur(s)       : Jérémie Santoro, Keya Dessasa
Date creation   : 08.12.2021

Description     : Ce programme permet de tester les fonctionnalités de base de la
                  librairie matrice et d'afficher les résultats

Remarque(s)     : -

Compilateur     : Mingw-w64 g++ 11.2.0
-----------------------------------------------------------------------------------
*/

#include <cstdlib>
#include <iostream>
#include <limits>
#include "matrice.h"

using namespace std;

int main() {

   Vecteur vecteur1 {1, 0, -7, 4};
   Matrice matrice1 {{3, 5, 3, 4},
                     {5, 2, 3, 4},
                     {1, 0, 2, 4}};
   Matrice matrice2 {{3, 5, 3, 4},
                     {5, 2, 3, 4},
                     {0, 0, 0}};
   Matrice matrice3 {{3, 5, 3, 4},
                     {1, 0, 2, 4}};

   cout << boolalpha;

   // 1. Affiche d'un vecteur et d'une matrice
   cout << "Affichage basique d'un vecteur et d'une matrice" << endl;
   cout << vecteur1                                          << endl;
   cout << matrice1                                          << endl;
   cout << endl;

   // 2. Test si la matrice est carrée
   // TODO : MARCHE PAS !
   cout << "Les matrices sont-elles carrées ?"  << endl;
   cout << "Matrice 1 :" << estCarree(matrice1) << endl;
   cout << "Matrice 2 :" << estCarree(matrice2) << endl;
   cout << "Matrice 3 :" << estCarree(matrice3) << endl;
   cout << endl;

   // 3. Test si la matrice est régulière
   cout << "Les matrices sont-elles régulières ?"  << endl;
   cout << "Matrice 1 :" << estReguliere(matrice1) << endl;
   cout << "Matrice 2 :" << estReguliere(matrice2) << endl;
   cout << "Matrice 3 :" << estReguliere(matrice3) << endl;
   cout << endl;

   // 4. Test de la longueur minimum des vecteurs d'une matrice
   cout << "Quel est la longueur minimum des matrices suivantes ?"  << endl;
   cout << "Matrice 1 :" << minCol(matrice1)                        << endl;
   cout << "Matrice 2 :" << minCol(matrice2)                        << endl;
   cout << "Matrice 3 :" << minCol(matrice3)                        << endl;
   cout << endl;

   // 5. Test de la somme de chaque ligne de la matrice
   cout << "Quel est la somme des lignes des matrices suivantes ?"      << endl;
   cout << "Matrice 1 :" << sommeLigne(matrice1)                        << endl;
   cout << "Matrice 2 :" << sommeLigne(matrice2)                        << endl;
   cout << "Matrice 3 :" << sommeLigne(matrice3)                        << endl;
   cout << endl;

   // 6. Test de la somme des colonnes des matrices suivantes
   // TODO
//   cout << "Quel est la somme des colonnes des matrices suivantes ?"    << endl;
//   cout << "Matrice 1 :" << sommeColonne(matrice1)                      << endl;
//   cout << "Matrice 2 :" << sommeColonne(matrice2)                      << endl;
//   cout << "Matrice 3 :" << sommeColonne(matrice3)                      << endl;
//   cout << endl;

   // 7. Test retourne la ligne d'une matrice dont la sommes est la plus faible
   cout << "Retourne la ligne d'une matrice dont la sommes est la plus faible ?"        << endl;
   cout << "Matrice 1 :" << vectSommeMin(matrice1)                        << endl;
   cout << "Matrice 2 :" << vectSommeMin(matrice2)                        << endl;
   cout << "Matrice 3 :" << vectSommeMin(matrice3)                        << endl;
   cout << endl;

   // 8. Test du mélange de la matrice sans altérer les lignes
   cout << "Mélange les matrices aléatoirement :"        << endl;
   shuffleMatrice(matrice1);
   shuffleMatrice(matrice2);
   shuffleMatrice(matrice3);
   cout << "Matrice 1 :" << matrice1                     << endl;
   cout << "Matrice 2 :" << matrice2                     << endl;
   cout << "Matrice 3 :" << matrice3                     << endl;
   cout << endl;

   // 9. Test du tri dans l'ordre croissant des matrices
   cout << "Tri des lignes d'une matrice en fonction de l'élément minimum" << endl;
   sortMatrice(matrice1);
   sortMatrice(matrice2);
   sortMatrice(matrice3);
   cout << "Matrice 1 :" << matrice1                     << endl;
   cout << "Matrice 2 :" << matrice2                     << endl;
   cout << "Matrice 3 :" << matrice3                     << endl;
   cout << endl;

   cin.ignore(numeric_limits<streamsize>::max(), '\n');

   return EXIT_SUCCESS;
}