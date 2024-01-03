#include "date.h"
#ifndef ELEVE_H
#define ELEVE_H
extern int c0, c1, c2, c3, c4;
extern int nbMaxEleve;
extern int nombreDesClasseCP, nombreDesClasseCE1, nombreDesClasseCE2, nombreDesClasseCM1, nombreDesClasseCM2;
typedef struct eleve{
    char   prenom[50];
    char   nom[50];
    int    ide; //ordre de saisie eleve
    int    idc; //ordre de saisie classe
    int    niveau; // 0:CP, 1:CE1, ..., 4:CM2
    char   classe[200]; //"CP" ,"CE1" , ..., "CM2"
    date_t dateDeNaissance;
}eleve_t;
void SaisirEleve(eleve_t* E);
void AfficherEleve(const eleve_t* E);
void ModifierEleve(eleve_t* E);
int  CalculerNiveau(eleve_t E);
void CalculerClasse(eleve_t* E);
void AffecterEleve(eleve_t* E, int indiceDeClasse);
#endif