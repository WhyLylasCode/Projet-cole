#include "classe.h"
#include <stdlib.h>

//......................................................
//fonction qui permet de saisir les eleves d'une classe
void SaisirClasse(classe_t *C)
{    
    //strcpy(C->nom, C->TabEleves[0].classe);
    printf("Combien d'élèves y a t-il ?\n");
    scanf("%d", &C->nbEleves);
    
    int idcPreced[nbMaxEleve]; // indice Classe de l Eleve Precedent
    SaisirEleve(&C->TabEleves[0]);
    
    for(int i=1; i<C->nbEleves; i++){
        SaisirEleve(&C->TabEleves[i]);
        idcPreced[i]=C->TabEleves[i-1].idc;
        if (!(C->TabEleves[i].idc == idcPreced[i]))
        {
            C->TabEleves[i-1].idc = C->TabEleves[i-1].idc+1;
            C->TabEleves[i-2].idc = C->TabEleves[i-2].idc+1;
        }
    }
        
    
}
//fonction qui permet d'afficher les classes dans un tableau
void AfficherClasse(classe_t C)
{    printf("Voici les eleves de la classe demandée :\n");
    int i;
    for(i=0; i<C.nbEleves; i++)
        AfficherEleve(&C.TabEleves[i]);
}




    