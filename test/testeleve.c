#include "eleve.h"
int main(int argc, char const *argv[])
{
    eleve_t E;
    SaisirEleve(&E);
    AfficherEleve(&E);
    printf("\ncompteur CP : %d\ncompteur CE1 : %d\ncompteur CE2 : %d\ncompteur CM1 : %d\ncompteur CM2 : %d\n",
            c0, c1, c2, c3, c4);
    //ModifierEleve(&E);
    //AfficherEleve(&E);
    CalculerClasse(&E);
}
