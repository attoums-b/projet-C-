#include "mage.hpp"
#include <algorithm>// pour utiliser la fonction pour le maximum(formule de degats)

Mage::Mage(string nom) : Hero(nom, 150, 95, 40, 60) {}

int Mage::getClasse() const{ return 2; }

int Mage::calculerDegats(const Hero &cible)  {
    // Le mage ignore 30% de la défense via le getter
    int defReduite = cible.getDefense() * 0.7;
    
    float facteur = (rand() % 61 + 70) / 100.0f; 
    int degats = (getAttaque() / std::max(1, defReduite)) * 10 * facteur;
    return degats;
}

int Mage::perdrePV(int montant) {
Hero:: perdrePV(montant);
return montant;
}
