#include "eleve.h"

int c0 = 0, c1 = 0, c2 = 0, c3 = 0, c4 = 0; //compteurs des eleve dans chaque niveau
int nbMaxEleve = 3;
int nombreDesClasseCP = 0, nombreDesClasseCE1 = 0, nombreDesClasseCE2 = 0,
  nombreDesClasseCM1  = 0, nombreDesClasseCM2 = 0;


int CalculerNiveau(eleve_t E){
    int age;
    age = CalculerAge(E.dateDeNaissance);
    if (age<6) return 8;
    if ((age>=6)&&(age<7)) return 0;
    if ((age>=7)&&(age<8)) return 1;
    if ((age>=8)&&(age<9)) return 2;
    if ((age>=9)&&(age<10)) return 3;
    if ((age>=10)&&(age<11)) return 4;
    else return 9;
}
//............................................................
void SaisirEleve(eleve_t* E){
    printf("saisir le prenom :");
    scanf("%s",E->prenom);

    printf("saisir le nom :");
    scanf("%s",E->nom);
    
    SaisirDate(&E->dateDeNaissance);

    int niv = CalculerNiveau(*E);
    E->niveau = niv;
    
    CalculerClasse(E);
}
//............................................................
void AfficherEleve(const eleve_t* E){
    printf("prenom :%s\n", E->prenom);
    printf("nom :%s\n", E->nom);
    AfficherDate(E->dateDeNaissance);
    printf("Niveau de l'élève : %d \n",E->niveau);
    printf("Niveau de l'élève : %s \n",E->classe);
    printf("classe : %d \n",E->idc);
}
//............................................................
void ModifierEleve(eleve_t* E){
    int niv, day, month, year;
    char fname[40];
    char lname[40];

    printf("On modifie le niveau ...\n");
    printf("saisir le niveau :\n");
    scanf("%d",&niv);
    E->niveau = niv;

    printf("On modifie le prenom ...\n");
    printf("saisir le nouveau prenom :\n");
    scanf("%s",fname);
    strcpy(E->prenom,fname);

    printf("On modifie le nom ...\n");
    printf("saisir le nouveau nom :\n");
    scanf("%s",lname);
    strcpy(E->nom,lname);

    printf("On modifie la date de naissance ...\n");
    printf("saisir sous la forme (jj/mm/aaaa) :\n");
    scanf("%d / %d / %d",&day, &month, &year);
    E->dateDeNaissance.DN.tm_mday =day;
    E->dateDeNaissance.DN.tm_mon =month;
    E->dateDeNaissance.DN.tm_year =year;
}
//............................................................
void CalculerClasse(eleve_t* E)
{
    if (E->niveau == 0){
        if (((E->ide) % nbMaxEleve) == 0){
            printf("ouverture d'une nouvelle classe CP\n");
            nombreDesClasseCP++;
        }
        strcpy(E->classe, "CP"); //une plaque : CP
        E->ide = c0;//orde d'arriver de l'eleve dans la CP 
        E->idc = E->ide/nbMaxEleve;//indice de la classe de l'eleve
        c0++;//incrementer le bon compteur
    }
    
    if (E->niveau == 1){
        if (((E->ide) % nbMaxEleve) == 0){
            printf("ouverture d'une nouvelle classe CE1\n");
            nombreDesClasseCE1++;
        }
        strcpy(E->classe, "CE1");//une plaque : CE1
        E->ide = c1;//orde d'arriver de l'eleve dans la CE1
        E->idc = E->ide/nbMaxEleve;
        c1++;
    }

    if (E->niveau == 2){
        if (((E->ide) % nbMaxEleve) == 0){
            printf("ouverture d'une nouvelle classe CE2\n");
            nombreDesClasseCE2++;
        }
        strcpy(E->classe, "CE2");
        E->ide = c2;
        E->idc = E->ide/nbMaxEleve;
        c2++;
    }
    if (E->niveau == 3){
        if (((E->ide) % nbMaxEleve) == 0){
            printf("ouverture d'une nouvelle classe CM1\n");
            nombreDesClasseCM1++;
        }
        strcpy(E->classe, "CM1");
        E->ide = c3;
        E->idc = E->ide/nbMaxEleve;
        c3++;
    }
    if (E->niveau == 4){
        if (((E->ide) % nbMaxEleve) == 0){
            printf("ouverture d'une nouvelle classe CM2\n");
            nombreDesClasseCM2++;
        }
        strcpy(E->classe, "CM2");
        E->ide = c4;
        E->idc = E->ide/nbMaxEleve;
        c4++;
    }
    if (E->niveau == 8){
        strcpy(E->classe,"Trop petit pour etre au primaire\n");
    }
    if (E->niveau == 9){
        strcpy(E->classe,"Trop grand pour etre au primaire\n");
    }

}
//............................................
void AffecterEleve(eleve_t* E, int indiceDeClasse){
    E->idc = indiceDeClasse;
}

