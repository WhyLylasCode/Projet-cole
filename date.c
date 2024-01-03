#include "date.h"


// saisir la date de naissance de l'élève
void SaisirDate(date_t *D)
{
    memset(&D->DN, 0 , sizeof(D->DN));
    printf("Veuillez saisir la date de naissance: ");
    scanf("%d/%d/%d", &D->DN.tm_mday,&D->DN.tm_mon,&D->DN.tm_year);
    D->DN.tm_mon =  D->DN.tm_mon;
    D->DN.tm_year = D->DN.tm_year;
}

// affiche la date de naissance de l'élève
void AfficherDate(date_t D)
{
    printf("La date de naissance de est : %d/%d/%d \n", D.DN.tm_mday,D.DN.tm_mon,D.DN.tm_year);

}

// Calculer l'âge de l'élève
int CalculerAge(date_t D)
{
    int age = 2023-(D.DN.tm_year);
    return age;
}

//int main(){}