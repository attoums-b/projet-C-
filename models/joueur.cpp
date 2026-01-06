#include <iostream>
using namespace std;
<<<<<<< HEAD
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
=======
class Joueur
{
private:
    string nom;
    Hero *hero[2]; // un joueur possède 3 héros au maximum
    int nbHeros;

public:
    Joueur(string n)
    {
        nom = n;
    }
    // methodes
    void ajouterHero(Hero *h)
    {
        if (nbHeros < 6)
        {
            hero[nbHeros++] = h;
        }
    }
    void selectionnerEquipe()
    {
        int choix;
        cout << R"(COMMENT VOULEZ VOUS SELECTIONNER VOTRE EQUIPE ?
>>>>>>> 8b4806f (classe héros bien modifiée)
        1- générer aléatoirement un héros
        2- choisir mes 3 héros 
    )";
        cin >> choix;
<<<<<<< HEAD
        if (choix == 1){
            //gestionnaire.genererHerosAleatoire()
        }
        else if (choix == 2){

        }

        }
    };



=======
        if (choix == 1)
        {
            // gestionnaire.genererHerosAleatoire()
        }
        else if (choix == 2)
        {
            for (int i = 0; i < 2; i++)
            {
                cout << "Joueur ,choisissez votre héros numero" << i + 1 << endl;
            }
        }
    }
};
>>>>>>> 8b4806f (classe héros bien modifiée)
