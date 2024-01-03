// fichier pour gérer la date de naissance de l'élève
#include <stdio.h>
#include <string.h>
#include <time.h> 

#ifndef DATE_H
#define DATE_H

typedef struct date{
    struct tm DN;
}date_t;

// saisir la date de naissance de l'élève
void SaisirDate(date_t*D);

// affiche la date de naissance de l'élève
void AfficherDate(date_t D);

// Calculer l'âge de l'élève
int CalculerAge(date_t D); 

#endif