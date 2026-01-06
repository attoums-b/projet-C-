#include <cstdlib>
#include <ctime>
#include <iostream>

using namespace std;

class Gestionnaire
{
    // methodes du gestionnaire

    Hero *genererHeroAleatoire();
    int combat(Hero *h1, Hero *h2);
    int combatEquipes(Joueur &j1, Joueur &j2);
}