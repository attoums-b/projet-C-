#include "hero.h"
#include <algorithm>

class Mage : public Hero {
public:
    Mage(string nom) : Hero(nom, 80, 95, 40, 60) {}

    int getClasse() const override { return 2; }

    int calculerDegats(const Hero &cible) override {
        // Le mage ignore 30% de la défense via le getter
        int defReduite = cible.getDefense() * 0.7;
        
        float facteur = (rand() % 61 + 70) / 100.0f; 
        int degats = (getAttaque() / std::max(1, defReduite)) * 10 * facteur;
        return degats;
    }
};