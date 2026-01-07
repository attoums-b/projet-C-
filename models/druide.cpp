#include "hero.h"
#include "druide.hpp"
#include <iostream>
#include <algorithm>
#include <cstdlib>

using namespace std;


Druide::Druide(string nom) : Hero(nom, 150, 50, 50, 50) {

}
int Druide::getClasse() const 
    {
        return 6;
    }

int Druide::calculerDegats(const Hero &cible) 
{
    int degats = Hero::calculerDegats(cible); // on calcul les dégats de la cible
    // les dégats d'un Druide sont très aléatoires (entre 70 et 130%)
    float degatsAleatoires = (70 + rand() % (130 - 70 + 1)) / 100.0f;
    degats *= (int)degatsAleatoires;
    return degats;
}
int Druide::perdrePV(int montant) {
    Hero:: perdrePV(montant);
    return montant;

};