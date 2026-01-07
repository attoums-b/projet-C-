#include "archer.hpp"
#include <iostream>



Archer::Archer(string nom) : Hero(nom,150, 75, 50, 95) {}

int Archer::getClasse() const  { return 3; }


int Archer::calculerDegats(const Hero &cible)  {
    int degats = Hero::calculerDegats(cible);
    // Chance de critique = Vitesse / 5
    if ((rand() % 100) < (getVitesse() / 5)) {
        degats *= 2;
        cout << "[CRITIQUE] " << getNom() << " a trouve une faille !" << endl;
    }
    return degats;
}


int Archer::perdrePV(int montant)  {
    // Chance d'esquive = Vitesse / 10
    if ((rand() % 100) < (getVitesse() / 10)) {
        cout << "[ESQUIVE] " << getNom() << " a evite le coup !" << endl;
    } else {
        Hero::perdrePV(montant); // Utilise la méthode private du parent
    }
    return montant;
}

