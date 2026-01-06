#include "hero.h"
#include <iostream>

class Assasin : public Hero
{
public:
    /*
    Un assasin possède:
        -une bonne attaque: 98/100
        -une très faible défense: 12/100
        -un très grande vitesse: 99/100
    */
    Assasin(string nom) : Hero(nom, 150, 98, 12, 99) {}
    int getClasse() const override
    {
        return 4;
    }

    int calculerDegats(const Hero &cible) override
    {
        int degats = Hero::calculerDegats(cible); // on calcul les dégats de la cible
        // lors du combat , si il commence , il met en plus 1.2x de dégats
        //--> à implémenter ici

        // les dégats d'un assasin sont multipliés par 2
        degats *= 2;
        return degats;
    }
};