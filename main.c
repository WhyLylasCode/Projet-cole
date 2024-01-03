#include "fichier.h"

int main() {
    ecole_t monEcole;
    int choix;

    do {
        printf("\n=== Menu ===\n");
        printf("1. Saisir les informations de l'école\n");
        printf("2. Afficher les informations de l'école\n");
        printf("3. Rechercher un élève\n");
        printf("4. Enregistrer l'école dans un fichier binaire\n");
        printf("5. Charger l'école depuis un fichier binaire\n");
        printf("6. Enregistrer l'école dans un fichier lisible\n");
        printf("7. Charger l'école depuis un fichier lisible\n");
        printf("0. Quitter\n");
        printf("Entrez votre choix : ");
        scanf("%d", &choix);

        switch (choix) {
            case 1:
                SaisirEcole(&monEcole);
                break;
            case 2:
                AfficherEcole(&monEcole);
                break;
            case 3: {
                eleve_t eleveRecherche;
                RechercherEleve(monEcole, eleveRecherche);
                break;
            }
            case 4: {
                char nomFichier[100];
                printf("Entrez le nom du fichier binaire : ");
                scanf("%s", nomFichier);
                EcrireBinaire(&monEcole, nomFichier);
                break;
            }
            case 5: {
                char nomFichier[100];
                printf("Entrez le nom du fichier binaire : ");
                scanf("%s", nomFichier);
                LireBinaire(&monEcole, nomFichier);
                break;
            }
            case 6: {
                char nomFichier[100];
                printf("Entrez le nom du fichier lisible : ");
                scanf("%s", nomFichier);
                EcrireFichierLisible(&monEcole, nomFichier);
                break;
            }
            case 7: {
                char nomFichier[100];
                printf("Entrez le nom du fichier lisible : ");
                scanf("%s", nomFichier);
                LireFichierLisible(&monEcole, nomFichier);
                break;
            }
            case 0:
                printf("Au revoir !\n");
                break;
            default:
                printf("Choix invalide. Veuillez réessayer.\n");
        }

    } while (choix != 0);

    return 0;
}
