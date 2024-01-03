#include "fichier.h"


int main ()
{
    ecole_t fichierEcole;
    
    //SaisirEcole(&fichierEcole);
    //AfficherEcole(&fichierEcole);
    //SaisirEleve(&fichiereleve.TabClasses->TabEleves);
    //EcrireBinaire(&fichiereleve, "ecolebinaire2.bin");
    //LireBinaire(&fichiereleve, "ecolebinaire2.bin");
    //EcrireFichierLisible(&fichierEcole, "ecolebinaire2.txt");
    LireFichierLisible(&fichierEcole, "ecole.txt");
    EcrireFichierLisible(&fichierEcole, "ecole2.txt");
    AfficherEcole(&fichierEcole);
}