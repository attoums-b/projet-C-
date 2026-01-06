#include "hero.h"
#include <iostream>

class Paladin : public Hero
{
public:
    Paladin(string nom) : Hero(nom, 150, 38, 44, 60) {}
    int getClasse() const override
    {
        return 5;
    }

    int calculerDegats(const Hero &cible) override
    {
        int degats = Hero::calculerDegats(cible); // on calcul les dégats de la cible
        // les dégats d'un assasin sont multipliés par 2
        degats *= 2;
        return degats;
    }
};