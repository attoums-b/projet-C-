<<<<<<< HEAD
#include <iostream>
#include <string>
#include <algorithm> // Pour std::max
#include <cstdlib>   // Pour rand()

using namespace std;

class Hero {
protected: // "protected" permet aux classes filles (Guerrier, etc.) d'accéder aux données [cite: 5]
    int idHero;
    string nomHero;
    int pv;
    int pvMax;    // Pour stocker les PV initiaux et les restaurer après victoire 
    int attaque;
    int defense;
    int vitesse;

public:
    // Constructeur : Initialise les attributs du héros [cite: 30]
    Hero(string nom, int pvHero, int attaqueHero, int defenseHero, int vitesseHero) {
        static int compteurId = 1; // Variable statique pour donner un ID unique à chaque héros
        idHero = compteurId++;
        nomHero = nom;
        pv = pvHero;
        pvMax = pvHero; // On garde en mémoire la vie maximum 
        attaque = attaqueHero;
        defense = defenseHero;
        vitesse = vitesseHero;
    }

    // Destructeur virtuel : Important pour la gestion de la mémoire en héritage [cite: 5]
    virtual ~Hero() {}

    // Affiche les caractéristiques actuelles du héros [cite: 37]
    void afficherStats() {
        cout << "Hero #" << idHero << " [" << nomHero << "] PV: " << pv 
             << " | ATK: " << attaque << " | DEF: " << defense << " | VIT: " << vitesse << endl;
    }

    // Méthodes d'accès (Getters) pour les calculs de combat [cite: 39]
    int getPV() const { return pv; }
    int getDefense() const { return defense; }
    int getVitesse() const { return vitesse; }
    string getNom() const { return nomHero; }

    // Règle 3 : Le héros gagnant regagne ses PV initiaux 
    void restaurerPV() { 
        pv = pvMax; 
    }

    // Rend la classe abstraite : chaque héros doit définir son type [cite: 38, 43, 58]
    virtual int getClasse() const = 0;

    // Calcule les dégâts infligés à une cible 
    virtual int calculerDegats(const Hero &cible) {
        // Formule suggérée : (Attaque / Défense cible) * facteur aléatoire [cite: 71, 72]
        // rand() % 21 + 90 génère un facteur entre 90 et 110 (pour simuler 0.9 à 1.1) [cite: 17, 72]
        float facteurAleatoire = (rand() % 21 + 90) / 100.0f; 
        int degats = (attaque / max(1, cible.getDefense())) * 10 * facteurAleatoire;
        return degats;
    }

    // Réduit les PV du héros suite à une attaque [cite: 12, 40]
    virtual void perdrePV(int montant) {
        pv -= montant;
        if (pv < 0) pv = 0; // Un héros ne peut pas avoir moins de 0 PV [cite: 12]
        cout << nomHero << " subit " << montant << " degats. (Reste: " << pv << " PV)" << endl;
    }

    // Méthodes optionnelles pour des effets spéciaux à chaque tour [cite: 41, 42]
    virtual void effetDebutTour() {
        // Peut être redéfini pour des soins ou des bonus temporaires
    }

    virtual void effetFinTour() {
        // Peut être redéfini pour des dégâts de poison par exemple
    }
=======
#include "hero.h"
#include <algorithm>
#include <cstdlib>

int Hero::calculerDegats(const Hero &cible)
{
    float facteur_aleatoire = (rand() % 21 + 90) / 100.0f;

    int degatsBase = (this->getAttaque() / max(1, cible.getDefense())) * 10 * facteur_aleatoire;

    return degatsBase;
}

void Hero::afficherStats()
{
    cout << "=======================================================" << endl;
    cout << "STATISTIQUES DU HEROS" << endl;
    cout << "Nom: " << nomHero << "n° " << idHero << endl;

    // connaitre le type de héros
    cout << "Type: ";
    switch (this->getClasse())
    {
    case 1:
        cout << "Guerrier";
        break;
    case 2:
        cout << "Mage";
        break;

    case 3:
        cout << "Archer";
        break;

    case 4:
        cout << "Assasin";
        break;

    case 5:
        cout << "Paladin";
        break;

    case 6:
        cout << "Druide";
        break;
    default:
        cout << "Inconnu";
    }
    cout << endl;

    cout << "Points de Vie (PV): " << pv << "/" << pvMax << endl;
    cout << "Attaque: " << attaque << endl;
    cout << "Defense: " << defense << endl;
    cout << "Vitesse: " << vitesse << endl;
    cout << "======================================================" << endl;
>>>>>>> 8b4806f (classe héros bien modifiée)
};