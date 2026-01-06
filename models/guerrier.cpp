#include "hero.h" // On inclut toujours le parent
#include <iostream>

class guerrier : public Hero {
public:
    guerrier(string nom) : Hero(nom, 100, 60, 80, 50) {}

    int getClasse() const override { return 1; }

    int calculerDegats(const Hero &cible) override {
        int degats = Hero::calculerDegats(cible);
        
        // Utilisation des getters obligatoires car variables privées
        if (getPV() < (getPVMax() * 0.3)) {
            degats *= 1.2;
            cout << "Bonus de Rage !" << endl;
        }
        return degats;
    }
};