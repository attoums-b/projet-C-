#include "Hero.h"
#include <iostream>

class Archer : public Hero {
public:
    // Stats : PV=85, ATK=75, DEF=50, VIT=95
    Archer(string nom) : Hero(nom, 85, 75, 50, 95) {}

    int getClasse() const override { return 3; }

    // --- ATTAQUE : Le Coup Critique ---
    int calculerDegats(const Hero &cible) override {
        int degats = Hero::calculerDegats(cible);
        // Chance de critique = Vitesse / 5
        if ((rand() % 100) < (getVitesse() / 5)) {
            degats *= 2;
            cout << "[CRITIQUE] " << getNom() << " a trouve une faille !" << endl;
        }
        return degats;
    }

    // --- DEFENSE : L'Esquive ---
    void perdrePV(int montant) override {
        // Chance d'esquive = Vitesse / 10
        if ((rand() % 100) < (getVitesse() / 10)) {
            cout << "[ESQUIVE] " << getNom() << " a evite le coup !" << endl;
        } else {
            Hero::perdrePV(montant); // Utilise la méthode private du parent
        }
    }
};