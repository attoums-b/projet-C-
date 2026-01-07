#include "../models/hero.hpp"
#include "../models/joueur.hpp"
#include <cstdlib>
#include <ctime>
#include <iostream>

using namespace std;

class Gestionnaire
{
public:
    
    // génere de façon aléatoire un héros dans la collection de héros
    Hero *genererHeroAleatoire(){
        srand(time(0));
        // récuperer la collection 
        total = joueur->getNbCollection
        //vérifier que le joueur a bien des héros dans sa collection

        /*Permet de générer un index entre 0 et le nombre total de héros que le joueur
        peut avoir (dans la collection il peut en voir 6) [0,5]
        */

        int indexHeroRandom = rand % total;

        //récuperer le héros à cet index
        return joueur->getHeroFromCollection(indexHeroRandom)

     
    };
    // permet de faire un combat entre deux héros(il peut y avoir plusieurs combats)
    int combat(Hero *h1, Hero *h2){
        int nbTours;
        //initialiser deux variables attaquants et défenseurs
        Hero* attaquant;
        Hero* defenseur;
        int pointAttaque;
        // tant que les deux héros on leur pv différents de 0
        while(h1->getPV() != 0 && h2->getPV() != 0){
            if(h1->getVitesse()>h2->getVitesse()){
                attaquant = h1;
                attaquant->attaquer();
                nbTours++;
            }else{
                attaquant = h2;
                attaquant->attaquer();
                nbTours++;
            }
        if(h1->getPV() == 0 ){
            vainqueur = h2;
            cout<<"le vainqueur de cette manche est: "<< h2->getNom();
            
        }else if (h2->getPV() == 0){
            vainqueur = h1;
            cout<<"le vainqueur de cette manche est: " << h1->getNom()
        }



        }
        return nbTours;
       
    };

    //permet de faire un combat entre deux joueurs
    int combatEquipes(Joueur &j1, Joueur &j2);
};