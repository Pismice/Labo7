/*
-----------------------------------------------------------------------------------
Nom du fichier  : <nom du fichier>.<xxx> (xxx = h ou cpp)
Auteur(s)       : Jérémie Santoro, Keya Dessasa
Date creation   : 08.12.2021

Description     : <à compléter>

Remarque(s)     : <à compléter>

Compilateur     : Mingw-w64 g++ 11.2.0
-----------------------------------------------------------------------------------
*/

#include <cstdlib>
#include <iostream>
#include "matrice.h"

using namespace std;

int main() {

   Vecteur vecteur1 {1, 0, -7, 4};
   Matrice matrice1 {{3, 5, 7},
                     {5, 2, 3},
                     {1, 0, 2}};


   cout << sommeLigne(matrice1);
	cout << boolalpha;
	cout << endl;
	cout << estCarree(matrice1);
	cout << endl;
	cout << estReguliere(matrice1);

   return EXIT_SUCCESS;
}