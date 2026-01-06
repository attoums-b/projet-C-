#include "hero.h"
#include <iostream>
#include <algorithm>
#include <cstdlib>



int Hero::calculerDegats(const Hero &cible) {
    // facteur_aleatoire entre 0.9 et 1.1 (comme souvent suggéré)
    float facteur = (rand() % 21 + 90) / 100.0f;
    
    // Formule du sujet : (Attaque / max(1, DefenseCible))
    // On utilise les getters car les variables sont privées !
    int degatsBase = (this->getAttaque() / max(1, cible.getDefense())) * 10 * facteur;
    
    return degatsBase;
}


void Hero::afficherStats() {
    cout << "========= STATISTIQUES DU HEROS =========" << endl;
    cout << "Nom      : " << nomHero << " (ID: " << idHero << ")" << endl;
    
    // On peut ajouter le type de classe pour plus de clarté
    // On appelle getClasse() qui est virtuelle, donc elle affichera le bon type
    cout << "Classe   : ";
    switch(this->getClasse()) {
        case 1: cout << "Guerrier"; break;
        case 2: cout << "Mage"; break;
        case 3: cout << "Archer"; break;
        case 4: cout << "Assassin"; break;
        case 5: cout << "Paladin"; break;
        case 6: cout << "Druide"; break;
        default: cout << "Inconnu";
    }
    cout << endl;

    cout << "Vie (PV) : " << pv << " / " << pvMax << endl;
    cout << "Attaque  : " << attaque << endl;
    cout << "Defense  : " << defense << endl;
    cout << "Vitesse  : " << vitesse << endl;
    cout << "=========================================" << endl;
}