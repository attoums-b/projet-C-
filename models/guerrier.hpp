#ifndef GUERRIER_HPP
#define GUERRIER_HPP

#include "Hero.hpp"

class Guerrier: public Hero{
public:
    Guerrier(string nom);

    //methodes virtuelles
    int getClasse() const override;
    int calculerDegats(const Hero &cible) override;
    void perdrePV(int montant) override;

};
#endif