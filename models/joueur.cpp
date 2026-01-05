#include <iostream>

using namespace std;

class Joueur{
private:
    string nom,
    hero* heros[6];
    int nbHeros = 0;

public:
    Joueur(string nom){
        this->nom = nom;
    }
};
