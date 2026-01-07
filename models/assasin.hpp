#ifndef ASSASSIN_HPP
#define ASSASSIN_HPP

#include "Hero.hpp"

class Assasin: public Hero{
public:
    Assasin(string nom);

    //methodes virtuelles
    int getClasse() const override;
    int calculerDegats(const Hero &cible) override;
    void perdrePV(int montant) override;

};
#endif