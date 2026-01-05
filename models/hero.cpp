#include <iostream>

using namespace std;

class Hero
{
private:
    int idHero;
    string nomHero;
    int pv;
    int attaque;
    int defense;
    int vitesse;

public:
    Hero(string nom, int pvHero, int attaqueHero, int defenseHero, int vitesseHero)
    {
        idHero ++;
        nomHero = nom;
        pv = pvHero;
        attaque = attaqueHero;
        defense = defenseHero;
        vitesse = vitesseHero;
    }

    void afficherStats();
    virtual int getClasse() const = 0;
    virtual int calculerDegats(const Hero &cible);
    virtual void perdrePV(int montant);
    virtual void effetDebutTour();
    virtual void effetFinTour();
};
