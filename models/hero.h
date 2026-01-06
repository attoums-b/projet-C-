#ifndef HERO_H
#define HERO_H

#include <iostream>


using namespace std;

class Hero
{
private:
    int idHero;
    static int compteurId;
    string nomHero;
    int pv;
    int pvMax = 150; // tout héro à initialement 150 pv max
    int attaque;
    int defense;
    int vitesse;

    // constructeur
public:
/**
 * Un héros à une 
 */
    Hero(string nom, int pvHero, int attaque, int defense, int vitesse);

    // Destructeur
    virtual ~Hero();

    // getters et setters pour acceder aux données
    int getId(){
        return idHero;
    }
    string getNom() const

    {
        return nomHero;
    }
    int getPV()
    {
        return pv;
    }

    int getPVMax() const
    {
        return pvMax;
    }

    int getAttaque() const
    {
        return attaque;
    }

    int getDefense() const
    {
        return defense;
    }

    int getVitesse() const
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
    virtual void attaquer();
    // les héros ont des manières différentes de perdre des pv 
    virtual void perdrePV(int valeurPerdue);

    // à la fin de chaque combat les pv se restaurent de la meme manière
    void restaurerPV(int valeurArestaurer);

    //methode affichant toutes les informations sur l'héros
    void afficherStats();
};


#endif