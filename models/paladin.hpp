#ifndef PALADIN_HPP
#define PALADIN_HPP

#include "Hero.hpp"

class Paladin: public Hero{
public:
    Paladin(string nom);

    //methodes virtuelles
    int getClasse() const override;
    int calculerDegats(const Hero &cible) override;
    void perdrePV(int montant) override;
   
};
#endif