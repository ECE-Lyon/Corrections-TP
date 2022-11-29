#include <stdio.h>
#include <stdlib.h>
#include "tp8ex3.h"

void demanderTaille(int *nbLignes, int *nbColonnes) {
    printf("Combien de lignes ?\n");
    scanf("%d", nbLignes);
    printf("Combien de colonnes ?\n");
    scanf("%d", nbColonnes);
}

void remplirMatrice(int **matrice, int nbLignes, int nbColonnes) {
    for (int i = 0; i < nbLignes; i++) {
        for (int j = 0; j < nbColonnes; j++) {
            matrice[i][j] = rand() % 256;
        }
    }
}
void afficherMatrice(int **matrice, int nbLignes, int nbColonnes) {
    for (int i = 0; i < nbLignes; i++) {
        for (int j = 0; j < nbColonnes; j++) {
            printf("%d ", matrice[i][j]);
        }
        printf("\n");
    }
}

void libererMatrice(int ***matrice, int nbLignes) {
    for (int i = 0; i < nbLignes; i++) {
        free((*matrice)[i]);
        (*matrice)[i] = NULL;
    }
    free(*matrice);
    *matrice = NULL;
}