#include <stdio.h>
#include <string.h>

#define NOMBRE_ETUDIANTS 5
#define MAXCARACT 50

typedef struct {
    float maths, info, phys, elec;
    char prenom[MAXCARACT];
} Etudiant;

void saisir(Etudiant etudiants[], int* nbEtus) {
    printf("Combien voulez entrer d'etudiants ?\n");
    scanf("%d", nbEtus);
    fflush(stdin);

    for (int i = 0; i < *nbEtus; i++) {
        printf("Nom de l'etudiant\n");
        fgets(etudiants[i].prenom, MAXCARACT, stdin);
        if (etudiants[i].prenom[strlen(etudiants[i].prenom) - 1] == '\n') {
            etudiants[i].prenom[strlen(etudiants[i].prenom) - 1] = '\0';
        }
        printf("Rentrez les quatre moyennes maths, info, phys, elec\n");
        scanf("%f %f %f %f", &etudiants[i].maths, &etudiants[i].info, &etudiants[i].phys, &etudiants[i].elec);
        fflush(stdin);
    }
}

void afficher(Etudiant etudiants[], int nbEtus) {
    for (int i = 0; i < nbEtus; i++) {
        printf("%s %f %f %f %f\n", etudiants[i].prenom, etudiants[i].maths, etudiants[i].info, etudiants[i].phys,
               etudiants[i].elec);
    }
}

void sauvegarderTexte(Etudiant etudiants[], int nbEtus) {
    FILE* pf = fopen("../notes.txt", "w");
    if(pf != NULL) { // on devrait toujours vérifier que le fichier est bien ouvert
        fprintf(pf, "%d\n", nbEtus);
        for (int i = 0; i < nbEtus; i++) {
            fprintf(pf, "%s %f %f %f %f\n", etudiants[i].prenom, etudiants[i].maths, etudiants[i].info, etudiants[i].phys,
                    etudiants[i].elec);
        }
        fclose(pf);
        pf = NULL;
    }
    else {
        printf("Erreur.");
    }
}

void chargerTexte(Etudiant etudiants[], int* nbEtus) {
    FILE* pf = fopen("../notes.txt", "r");
    fscanf(pf, "%d\n", nbEtus);
    for (int i = 0; i < *nbEtus; i++) {
        fscanf(pf, "%s %f %f %f %f\n", etudiants[i].prenom, &etudiants[i].maths, &etudiants[i].info, &etudiants[i].phys,
               &etudiants[i].elec);
    }
    fclose(pf);
    pf = NULL;
}


void sauvegarderBinaire(Etudiant etudiants[], int nbEtus) {
    FILE *pf = fopen("../notes.etus", "w");
    fwrite(&nbEtus, sizeof(int), 1, pf);
    fwrite(etudiants, sizeof(Etudiant), nbEtus, pf);
    fclose(pf);
    pf = NULL;
}

void chargerBinaire(Etudiant etudiants[], int* nbEtus) {
    FILE *pf = fopen("../notes.etus", "r");
    fread(nbEtus, sizeof(int), 1, pf);
    fread(etudiants, sizeof(Etudiant), *nbEtus, pf);
    fclose(pf);
    pf = NULL;
}

int main() {
    int choix = 0, fin = 0;
    Etudiant etudiants[NOMBRE_ETUDIANTS];
    int nbEtudiants = 0;

    while(!fin) {
        printf("1. Saisir\n2. Afficher\n3. Sauvegarder (texte)\n4. Charger (texte)\n5. Sauvegarder (binaire)\n6. Charger (binaire)\n7. Quitter\n");
        scanf("%d", &choix);
        switch (choix) {
            case 1: saisir(etudiants, &nbEtudiants); break;
            case 2: afficher(etudiants, nbEtudiants); break;
            case 3: sauvegarderTexte(etudiants, nbEtudiants); break;
            case 4: chargerTexte(etudiants, &nbEtudiants); break;
            case 5: sauvegarderBinaire(etudiants, nbEtudiants); break;
            case 6: chargerBinaire(etudiants, &nbEtudiants); break;
            case 7: fin = 1; break;
        }
    }
    return 0;
}