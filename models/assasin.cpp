#include "assasin.hpp"
#include <iostream>
using namespace std;


/*
Un assasin possède:
    -une très bonne attaque: 98/100(la meilleure du jeu)
    -une très faible défense: 12/100
    -un très grande vitesse: 99/100
*/
Assasin::Assasin(string nom) : Hero(nom, 150, 98, 12, 99) {}



int Assasin::getClasse() const
{
    return 4;
}

int Assasin::calculerDegats(const Hero &cible) 
{
    int degats = Hero::calculerDegats(cible); // on calcul les dégats de la cible
    // lors du combat , si il commence , il met en plus 1.2x de dégats
    //--> à implémenter ici

    // les dégats d'un assasin sont multipliés par 2
    degats *= 2;
    return degats;
}
int Assasin::perdrePV(int montant) {
    Hero:: perdrePV(montant);
    return montant
}
