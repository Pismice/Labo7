//
// Created by pismice on 08.12.2021.
//

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

	return (*min_element (vecteur1.begin(), vecteur1.end()) < *min_element (vecteur2
																										.begin(), vecteur2.end()));
}