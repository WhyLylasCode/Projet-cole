#include "ecole.h"

void SaisirEcole(ecole_t *EC){
    printf("Saisissez le nom de l'école : \n");
    scanf("%s", &EC->nom);
    getchar();
    printf("saisissez le nombre de classes : \n");
    scanf("%d", &EC->nbClasses);
    for (int i = 0; i < EC->nbClasses; i++)
    {
        SaisirClasse(&EC->TabClasses[i]);
    }
}

void AfficherEcole(const ecole_t *EC){
    printf("Voici les classes de la DuCoupEliteSchool : (max classes 5):\n");
    for (int i = 0; i < EC->nbClasses; i++)
    {
        AfficherClasse(EC->TabClasses[i]);
    }  
}

void RechercherEleve(ecole_t EC, eleve_t E)
{
    char prenom[200];
    char nom[200];
    printf("Saisissez le prenom et le nom de l'élève :\n");
    scanf("%s %s", prenom, nom);

    for (int i = 0; i < EC.nbClasses; i++)
    {
        for (int j = 0; j < EC.TabClasses[i].nbEleves; j++)
        {
            if ((strcmp(prenom, EC.TabClasses[i].TabEleves[j].prenom)) == 0 && (strcmp(nom, EC.TabClasses[i].TabEleves[j].nom))==0)
            {
                printf("L'élève %s %s est bien inscrit dans l'école\n", &EC.TabClasses[i].TabEleves[j].prenom, &EC.TabClasses[i].TabEleves[j].nom); 
                AfficherEleve(&EC.TabClasses[i].TabEleves[j]);
                break;
            }   
            else printf("L'élève ne fait pas partie de l'école\n");           
        }
    }
}    

/*void InscrireEleve(ecole_t *EC, eleve_t E)
{
    

}*/