#include <stdio.h>
#include <stdlib.h>

void creerTableau(int** pTab, int* pTaille) {
    printf("Combien d'entiers ?\n");
    scanf("%d", pTaille);
    *pTab = calloc(*pTaille, sizeof(int));
}

void libererTableau(int** tab) {
    free(*tab);
    *tab = NULL;
}

void afficherTableau(int* tab, int taille) {
    for (int i = 0; i < taille; i++) {
        printf("Case %d : %d.\n", i, tab[i]);
    }
}

int main() {
    int taille;
    int *tableau = NULL;
    creerTableau(&tableau, &taille);
    afficherTableau(tableau, taille);
    libererTableau(&tableau);
    return 0;
}