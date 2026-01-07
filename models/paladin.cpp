#include "paladin.hpp"
#include <iostream>

using namespace std;


/*
Un paladin  possède:
-une mauvaise attaque: 38/100(la meilleure du jeu)
-une défense passable: 46/100
-un bonne vitesse: 60/100
*/
Paladin::Paladin(string nom) : Hero(nom, 150, 38, 44, 60) {

}
int Paladin::getClasse() const 
{
    return 5;
}

int Paladin::calculerDegats(const Hero &cible) 
{
    int degats = Hero::calculerDegats(cible); 
    return degats;
    
}
    
int Paladin::perdrePV(int montant)  {
    /*
    -On réduit les dégats  de 15%
    */
    int montantReduit = montant * 0.85 
    cout<<"Réduction des dégats de 15% pour le paladin" << getNom() <<endl;
    return montantReduit;
    

}

