#ifndef JOUEUR_HPP
#define JOUEUR_HPP

#include<iostream>
#include "hero.hpp"

using namespace std;

class Gestionnaire;

class Joueur{
private:
    string nom;
    Hero* collectionHeros[6];
    Hero* equipeHeros[3];
    int nbHerosEquipe;
    int nbCollection;

public:
    Joueur(string n);

    void ajouterHeroCollection(Hero *hr);
    int getNbCollection();
    Hero* getHeroFromCollection(int index);
    void ajouterHero(Hero*h);
    void selectionnerEquipe();


};
#endif