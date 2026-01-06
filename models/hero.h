#ifndef HERO_H
#define HERO_H

#include <iostream>

using namespace std;

class Hero
{
private:
    int idHero;
    string nomHero;
    int pv;
    int pvMax = 150; // tout héro à initialement 100 pv max
    int attaque;
    int defense;
    int vitesse;

    // constructeur
public:
    Hero(string nom, int pvHero, int attaque, int defense, int vitesse);

    // Destructeur
    virtual ~Hero();

    // getters et setters pour acceder aux données
    string getNom() const
    {
        return nomHero;
    }
    int getPV()
    {
        return pv;
    }

    int getPVMax()
    {
        return pvMax;
    }

    int getAttaque()
    {
        return attaque;
    }

    int getDefense()
    {
        return defense;
    }

    int getVitesse()
    {
        return vitesse;
    }
    // Setters
    void setPV(int nouvPV)
    {
        pv = nouvPV;
    }

    virtual int getClasse() const = 0;
    virtual int calculerDegats(const Hero &cible);
    virtual void perdrePV(int valeurPerdue);
    virtual void restaurerPV(int valeurArestorer);
    void afficherStats();
};

#endif