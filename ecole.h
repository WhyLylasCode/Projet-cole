#include "classe.h"

#ifndef ECOLE_H
#define ECOLE_H

#define MAXCLASSES 5


typedef struct {
    char nom[200];
    int nbClasses;
    classe_t TabClasses[MAXCLASSES];
}ecole_t;

void SaisirEcole(ecole_t *E);
void AfficherEcole(const ecole_t *E);
void RechercherEleve(ecole_t EC, eleve_t E);

#endif