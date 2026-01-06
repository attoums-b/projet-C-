#include "hero.h"
#include <iostream>
#include <algorithm>
#include <cstdlib>

class Druide : public Hero
{
public:
    Druide(string nom) : Hero(nom, 150, 50, 50, 50) {}
    int getClasse() const override
    {
        return 6;
    }

    int calculerDegats(const Hero &cible) override
    {
        int degats = Hero::calculerDegats(cible); // on calcul les dégats de la cible
        // les dégats d'un Druide sont très aléatoires (entre 70 et 130%)
        float degatsAleatoires = (70 + rand() % (130 - 70 + 1)) / 100.0f;
        degats *= (int)degatsAleatoires;
        return degats;
    }
};