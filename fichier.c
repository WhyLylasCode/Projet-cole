#include "fichier.h"

void EcrireBinaire(const ecole_t *EC, char filename[])
{
    FILE *ptrfic;
    ptrfic = fopen(filename, "wb");
    if (ptrfic == NULL)
    {
        perror("erreur ouverture dans EcrireBinaire");
        exit(EXIT_FAILURE);
 
    }
    fwrite(EC, sizeof(ecole_t),1,ptrfic);
    fclose(ptrfic);
}
//___________________________________________________________________________________

void LireBinaire( ecole_t *EC, char filename[])
{
    FILE *ptrfic;
    ptrfic = fopen(filename, "rb");
    if (ptrfic == NULL)
    {
        perror("erreur ouverture dans LireBinaire");
        exit(EXIT_FAILURE);

    }
    fread(EC, sizeof(ecole_t),1,ptrfic);
    fclose(ptrfic);


}

//___________________________________________________________________________________

void EcrireFichierLisible(const ecole_t *EC, char filename[])
{
    FILE *ptrfic;
    ptrfic = fopen(filename,"w");
    if(ptrfic==NULL)
    {
        perror("erreur ouverture EcrireFichierLisible");
        exit(EXIT_FAILURE);
    }
    
    fprintf(ptrfic, "Nom école : %s ; Nombre de classes : %d\n", EC -> nom, EC -> nbClasses);
    
    int i,j;
    for ( i = 0; i < EC->nbClasses; i++)//boucles sur les classes
    {
        for ( j = 0; j < EC->TabClasses[i].nbEleves; j++)
        {
            fprintf(ptrfic, "Eleves : \n Classe : %s ; Niveau : %d ; ", EC->TabClasses[i].TabEleves[j].classe, EC->TabClasses[i].TabEleves[j].niveau);

            int lgprenom = strlen (EC->TabClasses[i].TabEleves[j].prenom);
                char texteprenom[100];
                strcpy(texteprenom, EC->TabClasses[i].TabEleves[j].prenom);
                //texteprenom[lgprenom-1]='\0';
                fprintf(ptrfic,"%s ; ", texteprenom);
            //_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _

            int lgnom = strlen (EC->TabClasses[i].TabEleves[j].nom);
                char textenom[100];
                strcpy(textenom, EC->TabClasses[i].TabEleves[j].nom);
                //textenom[lgnom-1]='\0';
                fprintf(ptrfic,"%s ; ", textenom);

                //date de naissance
                fprintf(ptrfic, "%d/%d/%d\n",
                    EC->TabClasses[i].TabEleves[j].dateDeNaissance.DN.tm_mday,
                    EC->TabClasses[i].TabEleves[j].dateDeNaissance.DN.tm_mon,
                    EC->TabClasses[i].TabEleves[j].dateDeNaissance.DN.tm_year);
        }
        fprintf(ptrfic, "\n");
    }   
fclose (ptrfic);
}

//___________________________________________________________________________________

void LireFichierLisible(ecole_t* EC, char  filename[])
{
    FILE *ptrfic;
    ptrfic = fopen(filename, "r");
    if (ptrfic == NULL)
    {
        perror("erreur ouverture dans LireBinaire");
        exit(EXIT_FAILURE);

    }
    fscanf(ptrfic, "%s ; %d\n", EC->nom, &EC->nbClasses);
    int i =0, j = 0;
    //fscanf(ptrfic, "%s ; %d ; %s ; %s ; %d/%d/%d\n",
    
    fscanf(ptrfic, "%s ; %d ; %s ; %s ",
        EC->TabClasses[i].TabEleves[j].classe, 
        &EC->TabClasses[i].TabEleves[j].niveau,
        EC->TabClasses[i].TabEleves[j].prenom,
        EC->TabClasses[i].TabEleves[j].nom);
    
    
    fclose(ptrfic);
}
