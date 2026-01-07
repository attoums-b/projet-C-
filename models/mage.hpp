#ifndef MAGE_HPP
#define MAGE_HPP

#include "Hero.hpp"

class Mage: public Hero{
public:
    Mage(string nom);

    //methodes virtuelles
    int getClasse() const override;
    int calculerDegats(const Hero &cible) override;
    void perdrePV(int montant) override;
   
};
#endif