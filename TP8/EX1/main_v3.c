#include <stdio.h>
#include <stdlib.h>

int creerTableau(int** pTab) {
    int taille;
    printf("Combien d'entiers ?\n");
    scanf("%d", &taille);
    *pTab = calloc(taille, sizeof(int));
    return taille;
}

void afficherTableau(int* tab, int taille) {
    for (int i = 0; i < taille; i++) {
        printf("Case %d : %d.\n", i, tab[i]);
    }
}

int main() {
    int taille;
    int *tableau = NULL;
    taille = creerTableau(&tableau); // risque d'oubli de récupération de la taille du tableau
    afficherTableau(tableau, taille);
    free(tableau);
    tableau = NULL;
    return 0;
}