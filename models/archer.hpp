#ifndef ARCHER_HPP
#define ARCHER_HPP

#include "Hero.hpp"

class Archer: public Hero{
public:
    Archer(string nom);

    //methodes virtuelles
    int getClasse() const override;
    int calculerDegats(const Hero &cible) override;
    void perdrePV(int montant) override;
   
};
#endif