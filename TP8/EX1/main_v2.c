#include <stdio.h>
#include <stdlib.h>

int* creerTableau(int* pTaille) {
    int* tab = NULL;
    printf("Combien d'entiers ?\n");
    scanf("%d", pTaille); // ou &*pTaille
    tab = calloc(*pTaille, sizeof(int));
    return tab;
}

void afficherTableau(int* tab, int taille) {
    for (int i = 0; i < taille; i++) {
        printf("Case %d : %d.\n", i, tab[i]);
    }
}

int main() {
    int taille;
    int *tableau = NULL;
    tableau = creerTableau(&taille); // risque d'oubli de récupération de l'adresse du tableau
    afficherTableau(tableau, taille);
    free(tableau);
    tableau = NULL;
    return 0;
}