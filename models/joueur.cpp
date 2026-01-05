#include <iostream>
using namespace std;
class Joueur{
private:
    string nom;
    Hero * hero[6];
    int nbHeros;

    public:
    Joueur(string n){
        nom = n ;
    }
    //methode 
    void ajouterHero(Hero* h){
        if (nbHeros < 6){
            hero[nbHeros++] = h;
        }
    }
    void selectionnerEquipe(){
        int choix;
        cout<< R"(QUE VOULEZ-VOUS FAIRE?
        1- générer aléatoirement un héros
        2- choisir mes 3 héros 
    )";
        cin >> choix;
        if (choix == 1){
            //gestionnaire.genererHerosAleatoire()
        }
        else if (choix == 2){

        }

        }
    };



