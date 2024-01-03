#include "ecole.h"
#include <stdlib.h>

#ifndef FICHIER_H 
#define FICHIER_H

void EcrireBinaire(const ecole_t *EC, char filename[]);

void LireBinaire( ecole_t *EC, char filename[]);

void EcrireFichierLisible(const ecole_t *EC, char filename[]);

void LireFichierLisible(ecole_t* EC, char  filename[]);

#endif