#include "joueur.hpp"
#include <iostream>
#include "../controller/gestionnaire.cpp"


using namespace std;



/*

-Un joueur possède un nom , une collection d'héros et une équip d'héros pour
effectuer un combat
nbHerosEquipe et nbCollection servent à gérer les indices des élements dex
différents tableaux 
 */
Joueur::Joueur(string n) : nom(n), nbHerosEquipe(0), nbCollection(0){

}

//Destructeur
Joueur::~Joueur(){};


//methode permettant d'ajouter un héros à la collection
void Joueur::ajouterHeroCollection(Hero* hr){
    if(nbCollection < 6){
        collectionHeros[nbCollection++] = hr;

    }else{
        cout<<"Impossible d'ajouter! , roster plein"<<endl;
    }

}
int Joueur::getNbCollection(){
    return nbCollection;
}
// sert dans la génération du héros aléatoire
Hero* Joueur::getHeroFromCollection(int index){
    if(index>=0 && index < nbCollection){
        return collectionHeros[index];
    }
    return nullptr;
}

//methode permettant d'ajouter un héros à l'équipe de héros après la selection 
void Joueur::ajouterHeroEquipe(Hero* h){
    if (nbHerosEquipe < 3){
        equipeHeros[nbHerosEquipe++] = h;
    }
}

//methode permmettant à un joueur de selectionner son équipe pour le combat
void Joueur::selectionnerEquipe(){
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
        for(int i= 0 , i< 3; i++){
            Gestionnaire->genererHerosAleatoire();

        }
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
        ajouterHeroEquipe(collectionHeros[numChoisi]);

        }

    }

}




