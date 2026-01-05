#include <iostream>

using namespace std;

class Hero
{
private:
    string nomHero;
    string typeHero;
    int pv;
    int attaque;
    int defense;
    int vitesse;

public:
    Hero(string nomHero, int pv, int attaque, int defense, int vitesse)
    {
        this->nomHero = nomHero;
        this->pv = pv;
        this->attaque = attaque;
        this->defense = defense;
        this->vitesse = vitesse;
    }

    void afficherStats()
    {
        cout << "ENSEMBLE DES STATISTIQUES" << endl;
    }
    virtual int getClasse() const = 0;
    virtual int calculerDegats(const Hero &cible);
    virtual void perdrePV(int montant);
    virtual void effetDebutTour();
    virtual void effetFinTour();
};
