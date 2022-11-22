#include <stdio.h>

#define NB_LIGNES 3
#define NB_COLONNES 4

void remplirMatrice(int mat[NB_LIGNES][NB_COLONNES]) {
    for (int i = 0; i < NB_LIGNES; i++) {
        for (int j = 0; j < NB_COLONNES; j++) {
            printf("Ligne %d, colonne %d :\n", i + 1, j + 1);
            scanf("%d", &mat[i][j]);
        }
    }
}

void afficherTableau(int tab[NB_LIGNES][NB_COLONNES]) {
    int i, j;
    printf("  | ");
    for (i = 0; i < 4; i++) {
        printf("%c  | ", 65 + i);
    }
    printf("\n-----------------------\n");
    for (i = 0; i < NB_LIGNES; i++) {
        printf("%d |", i + 1);
        for (j = 0; j < NB_COLONNES; j++) {
            printf(" %2d", tab[i][j]);
            printf(" |");
        }
        printf("\n");
    }
    printf("-----------------------\n");
}

int main(void) {
    int matrice[NB_LIGNES][NB_COLONNES] = {{0}};
    int tab[NB_LIGNES * NB_COLONNES];
    remplirMatrice(matrice);
    afficherTableau(matrice);

    int k = 0;
    for (int i = 0; i < NB_LIGNES; i++) {
        for (int j = 0; j < NB_COLONNES; j++) {
            tab[k++] = matrice[i][j];
        }
    }

    for (int i = 0; i < NB_LIGNES * NB_COLONNES; i++) {
        printf("[%d]", tab[i]);
    }

    return 0;
}