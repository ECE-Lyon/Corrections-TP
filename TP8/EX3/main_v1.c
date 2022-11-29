#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    srand(time(NULL));
    int** matrice = NULL;
    int nbLignes, nbColonnes;
    printf("Combien de lignes ?\n");
    scanf("%d", &nbLignes);
    printf("Combien de colonnes ?\n");
    scanf("%d", &nbColonnes);
    // Allocation
    matrice = calloc(nbLignes, sizeof(int*));
    for (int i = 0; i < nbLignes; i++) {
        matrice[i] = malloc(nbColonnes * sizeof(int));
    }
    // Remplissage
    for (int i = 0; i < nbLignes; i++) {
        for (int j = 0; j < nbColonnes; j++) {
            matrice[i][j] = rand() % 256;
        }
    }
    // Affichage
    for (int i = 0; i < nbLignes; i++) {
        for (int j = 0; j < nbColonnes; j++) {
            printf("%d ", matrice[i][j]);
        }
        printf("\n");
    }
    // Libération
    for (int i = 0; i < nbLignes; i++) {
        free(matrice[i]);
        matrice[i] = NULL;
    }
    free(matrice);
    matrice = NULL;
    return 0;
}