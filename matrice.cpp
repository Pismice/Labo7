//
// Created by pismice on 08.12.2021.
//

#include "matrice.h"
#include "vecteur.h"
#include <algorithm>
#include <chrono>
#include <random>

using namespace std;
unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();

bool estDeMemeTaille(const Vecteur v1, const Vecteur v2)
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

/*bool plusGrandeValeur(Vecteur v)
{
   v.size();
}*/

bool estPlusPetitQue(const Vecteur v1, const Vecteur v2)
{
   if(v1.size() < v2.size())
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

Vecteur sommeColonne(const Matrice& matrice)
{
   // Trouver le plus grand vecteur de la matrice
   // for_each(matrice.begin(), matrice.end(), plusGrandeValeur);
   Vecteur longeurDesLignes(matrice.size());

   // TODO: LA TAILLE DE REPONSE DOIT CORRESPONDRE AU PLUS LONG VECTEUR
   Vecteur reponse(matrice.size());

   return reponse;
}

bool estCarree(const Matrice& matrice){
	if(!matrice.empty())
   {
      bool reponse = min_element(matrice.begin(), matrice.end(), estPlusPetitQue)->size() == matrice.size();
      return reponse;
   }
	return true;
}

bool estReguliere(const Matrice& matrice) {
	if(!matrice.empty())
   {
      return equal(matrice.begin(), matrice.end()-1, matrice.begin()+1, estDeMemeTaille);
   }
   return true;
}

void shuffleMatrice(Matrice& matrice){
	shuffle(matrice.begin(), matrice.end(), default_random_engine(seed));
}

void sortMatrice(Matrice& matrice){
	sort(matrice.begin(), matrice.end(), mini);
}

Vecteur vectSommeMin(const Matrice& matrice){
	Vecteur reponse(matrice.size());
	min_element(matrice.begin(), matrice.end(), somme_min);
}