/*
-----------------------------------------------------------------------------------
Nom du fichier  : vecteur.cpp
Auteur(s)       : Jérémie Santoro, Keya Dessasa
Date creation   : 08.12.2021

Description     : Définitions permettant de manipuler des vecteurs via de nombreuses
                  fonctions ainsi que l'affichage de celles-ci via un opérateur de
                  sortie.

Remarque(s)     : -

Compilateur     : Mingw-w64 g++ 11.2.0
-----------------------------------------------------------------------------------
*/


#include "vecteur.h"
#include <numeric>

std::ostream& operator <<(std::ostream& os, const std::vector<int>& vecteur)
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

int somme(const Vecteur& vecteur)
{
   return accumulate(vecteur.begin(), vecteur.end(), 0);
}

bool mini(Vecteur& vecteur1,Vecteur& vecteur2){

	return (*min_element (vecteur1.begin(), vecteur1.end()) < *min_element
	(vecteur2.begin(), vecteur2.end()));
}


bool somme_min(const Vecteur& vecteur1, const Vecteur& vecteur2)
{
	return (accumulate(vecteur1.begin(), vecteur1.end(), 0))
			 < (accumulate(vecteur2.begin(), vecteur2.end(), 0));
}

bool taille_min(const Vecteur& vecteur1, const Vecteur& vecteur2)
{
	return vecteur1.size() < vecteur2.size();
}

Vecteur sommeColonne(Vecteur vecteur1,Vecteur& vecteur2){
	const size_t MAX_SIZE = max(vecteur1.size(), vecteur2.size());
	if (vecteur1.size() < MAX_SIZE)
		vecteur1.resize(MAX_SIZE, 0);
	else if (vecteur2.size() < MAX_SIZE)
		vecteur2.resize(MAX_SIZE, 0);

	Vecteur vecteur3(TAILLE_MAX, 0);
	transform(vecteur1.begin(), vecteur1.end(), vecteur2.begin(), vecteur3.begin(),
				 add);
	return vecteur3;
}