#include "hero.h"
#include <iostream>
#include <algorithm>
#include <cstdlib>


Hero::~Hero() {};
int Hero::compteurId =0;
//constructeur de 

Hero::Hero(string nom,int pvHero, int atk, int def, int vit){
    this->idHero = compteurId++;
    this->nomHero = nom;
    this-> pv = pvHero;
    this->pvMax = 150;
    this-> attaque = atk;
    this->defense = def;
    this->vitesse = vit;

    //if(this->pv>pvMax): this->pv = pvMax
}




int Hero::calculerDegats(const Hero &cible) {
    // facteur_aleatoire entre 0.9 et 1.1 (comme souvent suggéré)
    float facteur = (rand() % 21 + 90) / 100.0f;
    
    // Formule du sujet : (Attaque / max(1, DefenseCible))
    // On utilise les getters car les variables sont privées !
    int degatsBase = (this->getAttaque() / max(1, cible.getDefense())) * 10 * facteur;
    
    return degatsBase;
}


void Hero::afficherStats() {
    cout << "====================================" << endl;
    cout <<"STATISTIQUES DU HEROS"<<endl;
    cout << "Nom      : " << nomHero << " (ID: " << idHero << ")" << endl;
    
    /*
    Pour pouvoir afficher le type du héro dont on veut les statistiques,
    on va utiliser le switch case. On appelle getClasse() qui est virtuelle
    pour le type, et on match le retour de getClasse avec le bon type
    */

    cout << "Type   : ";
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

int Hero::restaurerPV(){
    /*
    à la fin du combat , le gagnant récupère les PV qu'il a perdu 
    il s'agit de faire les pvMax moins la valeur finale qu'il a perdue 
    accumulée tout au long du combat 
    */
    this->pv = pvMax - valeurPerdue;
    cout<<"Points de vie restaurés!"<<endl;
}