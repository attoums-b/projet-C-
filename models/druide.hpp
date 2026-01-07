#ifndef DRUIDE_HPP
#define DRUIDE_HPP

#include "Hero.hpp"

class Druide: public Hero{
public:
    Druide(string nom);

    //methodes virtuelles
    int getClasse() const override;
    int calculerDegats(const Hero &cible) override;
    void perdrePV(int montant) override;

    
};
#endif