#include "hero.h"
#include <iostream>

class archer : public Hero {
public:
    archer(string nom) : Hero(nom, 85, 75, 50, 95) {}

    int getClasse() const override { return 3; }

    void perdrePV(int montant) override {
        // Esquive basée sur la vitesse (accès via getter)
        if ((rand() % 100) < (getVitesse() / 10)) {
            cout << getNom() << " a esquive !" << endl;
        } else {
            Hero::perdrePV(montant); // Appelle la méthode de base
        }
    }
};