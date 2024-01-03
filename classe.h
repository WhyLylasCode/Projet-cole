// fichier pour obtenir les différentes classes de l'ecole
#include "eleve.h"


#ifndef CLASSE_H
#define CLASSE_H
#define MAXELEVES 25 //on met un maximum de 25 eleves par classe
                     //car au dela c'est trop pour les profs!

typedef struct Classe
{
    char    nom[200];
    int     nbEleves;
    eleve_t TabEleves[MAXELEVES];

}classe_t;

//fonction qui permet de saisir les eleves d'une classe
void SaisirClasse(classe_t *C);

//fonction qui permet d'afficher les classes dans un tableau
void AfficherClasse(classe_t C);

#endif