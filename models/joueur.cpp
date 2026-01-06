#include "hero.h"
#include <iostream>



using namespace std;
class Joueur{
private:
    string nom;
    Hero* collectionHeros[6];// les héros possédés par le joueur
    Hero* equipeHeros[3]; // l'équipe selectionnée
    int nbHerosEquipe;
    int nbCollection;

public:
/*

-Un joueur possède un nom , une collection d'héros et une équip d'héros pour
effectuer un combat
nbHerosEquipe et nbCollection servent à gérer les indices des élements dex
différents tableaux 
 */
    Joueur(string n){
        nom = n ;
        nbHerosEquipe = 0;
        nbCollection = 0;
    }

    //Destructeur
    ~Joueur(){};


    //methode permettant d'ajouter un héros à la collection
    void ajouterHeroCollection(Hero* hr){
        if(nbCollection < 6){
            collectionHeros[nbCollection++] = hr;

        }else{
            cout<<"Impossible d'ajouter! , roster plein"<<endl;
        }

    }

    //methode permettant d'ajouter un héros à l'équipe de héros après la selection 
    void ajouterHero(Hero* h){
        if (nbHerosEquipe < 3){
            equipeHeros[nbHerosEquipe++] = h;
        }
    }

    //methode permmettant à un joueur de selectionner son équipe pour le combat
    void selectionnerEquipe(){
        /*
        Pour selectionner l'équipe , nous allons proposer à l'utilisateur deux type de sélection:
         I- la selection aléatoire 
         II- la selection manuelle(c'est lui meme qui le fait)
         */
        int choix;
        cout <<"QUE VOULEZ-VOUS FAIRE?"<<endl;
        cout <<"1- générer aléatoirement un héros"<<endl;
        cout <<"2- choisir mes 3 héros"<<endl;
        cin>> choix;

        if (choix == 1){
            cout<<"Génération aléatoire en cours..."<<endl;
            //gestionnaire.genererHerosAleatoire()
        }
        else if (choix == 2){
            /*
            +Si il choisit de selectionner ses 3 héros:
                +Boucle allant de 0 à 3:
                -afficher 'joueur choisis ton heros n°1'
                    +parcourir la liste des héros
                    -afficher leur nom et leur type 
                -récupérer le choix de l'utilisateur
                -ajouter ce choix à la liste de son équipe

             */
            nbHerosEquipe = 0;
            int choix;
            for(int i = 0; i <3; i++){
                cout<<"Joueur " << nom << ", choississez votre héros n°" << i + 1<<endl;             
                for(int j = 0; i <nbCollection ; j++){
                    cout<<collectionHeros[j]->getId()<<""<< collectionHeros[i]->getNom() << " :" <<collectionHeros[i]->getClasse();

        }
            int numChoisi;
            cout<<"Quel est votre choix? entrez le numero: ";
            cin >> numChoisi;
            ajouterHero(collectionHeros[numChoisi]);

            }

        }

        }
    };



