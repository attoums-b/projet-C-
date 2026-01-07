#include <iostream>
#include <ctime> // pour le rand
#include <cstdlib>


using namespace std;

#include "../models/hero.hpp"
#include "../models/joueur.hpp"
#include "../models/guerrier.hpp"
#include "../models/mage.hpp"
#include "../models/archer.hpp"
#include "../models/assasin.hpp"
#include "../models/paladin.hpp"
#include "../models/druide.hpp"


int main(){
    srand(time(0));


    // création de héros
    Hero* g1 = new Assasin("Exodus");
    Hero* p1 = new Paladin("Lyram");
    Hero* d1 = new Druide("Mirage");
    Hero* g2 = new Assasin("Divin");
    Hero* d2 = new Druide("Huges");
    Hero* p2 = new Paladin("Cooler");

    p2->afficherStats();

    g1->attaquer(*p2);

    //ajout de héros au roster du joueur
    //nettoyage
    delete g1;
    delete p1;
    delete d1;
    delete g2;
    delete d2;
    delete p2;

    return 0;



}