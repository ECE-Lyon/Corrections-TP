#include <stdio.h>
#define MATRICE_NB_LIGNES 3
#define MATRICE_NB_COLONNES 4

int main() {
    int matrice[MATRICE_NB_LIGNES][MATRICE_NB_COLONNES];
    int tab[MATRICE_NB_LIGNES * MATRICE_NB_COLONNES];
    int i, j, k;

    for(i = 0; i < MATRICE_NB_LIGNES; i++) {
        for(j = 0; j < MATRICE_NB_COLONNES; j++) {
            printf("Veuillez saisir la valeur ligne %d, colonne %d :\n", i+1, j+1);
            scanf("%d", &matrice[i][j]);
        }
    }

    for(i = 0, k = 0; i < MATRICE_NB_LIGNES; i++) {
        for(j = 0; j < MATRICE_NB_COLONNES; j++) {
            tab[k++] = matrice[i][j];
        }
    }

    printf("Matrice :\n");
    for(i = 0; i < MATRICE_NB_LIGNES; i++) {
        for(j = 0; j < MATRICE_NB_COLONNES; j++) {
            printf("%d\t", matrice[i][j]);
        }
        printf("\n");
    }

    printf("Tableau 1D :\n");
    for(i = 0; i < MATRICE_NB_LIGNES * MATRICE_NB_COLONNES; i++) {
        printf("%d ", tab[i]);
    }

    return 0;
}

