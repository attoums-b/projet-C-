#include "Guerrier.hpp" // On inclut toujours le parent
#include <iostream>

using namespace std;

/*
Un guerrier possède:
    -une attaque assez bonne: 60/100
    -une bonne défense: 88/100
    -une vitesse moyenne: 57/100
    */
Guerrier::Guerrier(string nom) : Hero(nom, 150, 60, 88, 57) {

}

int Guerrier::getClasse() const {
     return 1; 
    }

int Guerrier::calculerDegats(const Hero &cible)  {
    int degats = Hero::calculerDegats(cible);
    
    // Utilisation des getters obligatoires car variables privées
    if (getPV() < (getPVMax() * 0.3)) {
        // 20% de dégats constants quand ses PV sont inférieurs à 30
        degats *= 1.2;
        cout << "Bonus de Rage !" << endl;
    }
    return degats;
}

void Guerrier::perdrePV(int montant) {
        Hero:: perdrePV(montant);
  
};
