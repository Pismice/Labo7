/*
-----------------------------------------------------------------------------------
Nom du fichier  : matrice.cpp
Auteur(s)       : Jérémie Santoro, Keya Dessasa
Date creation   : 08.12.2021

Description     : Définitions permettant de manipuler des matrices via de nombreuses
                  fonctions ainsi que l'affichage de celles-ci via un opérateur de
                  sortie. Il est également possible de manipuler les vecteurs
                  et de les afficher

Remarque(s)     : - Le random pour la fonction shuffleMatrice est générée sur un seed
                    basé sur l'heure

Compilateur     : Mingw-w64 g++ 11.2.0
-----------------------------------------------------------------------------------
*/

#include "matrice.h"
#include <chrono>
#include <random>

using namespace std;

// Manipulation des vecteurs -----------------------------------------------------

std::ostream& operator <<(ostream& os, const Vecteur & vecteur)
{
   os << '(';

   if (vecteur.begin() != vecteur.end())
   {
      std::ostream_iterator<int> sortie(os, ", ");
      Vecteur::const_iterator it = prev(vecteur.end());
      copy(vecteur.begin(), it, sortie);
      os << *it;
   }

   os << ')';
   return os;
}

/**
 * Effectue la somme de tous les éléments d'un vecteur
 * @param vecteur Vecteur utilisé
 * @return Somme des éléments du vecteur
 */
int somme(const Vecteur& vecteur)
{
   return accumulate(vecteur.begin(), vecteur.end(), 0);
}

/**
 * Compare le plus petit élément de 2 vecteurs
 * @param vecteur1 Vecteur 1
 * @param vecteur2 Vecteur 2
 * @return Retourne vrai si le vecteur 1 a un élément minimum plus petit que vecteur 2
 */
bool mini(Vecteur& vecteur1,Vecteur& vecteur2){
   return (*min_element (vecteur1.begin(), vecteur1.end()) < *min_element
      (vecteur2.begin(), vecteur2.end()));
}

/**
 * TODO
 * @param vecteur1
 * @param vecteur2
 * @return
 */
bool somme_min(const Vecteur& vecteur1, const Vecteur& vecteur2)
{
   return (accumulate(vecteur1.begin(), vecteur1.end(), 0))
          < (accumulate(vecteur2.begin(), vecteur2.end(), 0));
}

/**
 * TODO
 * @param vecteur1
 * @param vecteur2
 * @return
 */
bool taille_min(const Vecteur& vecteur1, const Vecteur& vecteur2)
{
   return vecteur1.size() < vecteur2.size();
}

// Manipulation des matrices -----------------------------------------------------

std::ostream& operator <<(std::ostream& os, const Matrice& matrice)
{
   os << '[';

   if (matrice.begin() != matrice.end()) {
      Matrice ::const_iterator it = prev(matrice.end());
      for_each(matrice.begin(), it, [](Vecteur v) {cout << v << ", ";});
      os << *it;
   }

   os << ']';
   return os;
}

bool estDeMemeTaille(const Vecteur& v1, const Vecteur& v2)
{
   if(v1.size() == v2.size())
   {
      return true;
   }
   else
   {
      return false;
   }
}

Vecteur sommeLigne(const Matrice& matrice)
{
   // La taille du vecteur correspond au nombre de vecteurs (lignes) dans la matrice
   Vecteur reponse(matrice.size());

   transform(matrice.begin(), matrice.end(), reponse.begin(), somme);

   return reponse;
}

bool taille_max(const Vecteur& vecteur1, const Vecteur& vecteur2)
{
   return vecteur1.size() < vecteur2.size();
}

size_t maxCol(const Matrice& matrice){

   return max_element(matrice.begin(), matrice.end(), taille_max)->size();
}

Vecteur sommeColonne(Matrice matrice1){
   size_t max_size;
   max_size = maxCol(matrice1);
   for(auto & i : matrice1){
      if(i.size() < max_size){
         i.resize(max_size,0);
      }
   }

   Vecteur v3;
   v3.resize(max_size,0);
   for(size_t i = 0; i < max_size; ++i){
      for(auto & j : matrice1){
         v3[i]+= j[i];
      }
   }

   return v3;
}

bool estCarree(const Matrice& matrice){
   if(matrice.empty() || (estReguliere(matrice) && matrice.at(0).size() == matrice.size()))
   {
      return true;
   }
   else
   {
      return false;
   }
}

bool estReguliere(const Matrice& matrice) {
   if(!matrice.empty())
   {
      return equal(matrice.begin(), matrice.end()-1, matrice.begin()+1, estDeMemeTaille);
   }
   return true;
}

void shuffleMatrice(Matrice& matrice){
   unsigned seed = unsigned(std::chrono::system_clock::now().time_since_epoch().count());
   shuffle(matrice.begin(), matrice.end(), default_random_engine(seed));
}

void sortMatrice(Matrice& matrice){
   sort(matrice.begin(), matrice.end(), mini);
}

Vecteur vectSommeMin(const Matrice& matrice){
   return *min_element(matrice.begin(), matrice.end(), somme_min);

}

size_t minCol(const Matrice& matrice){

   return min_element(matrice.begin(), matrice.end(), taille_min)->size();
}
