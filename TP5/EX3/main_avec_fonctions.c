#include <stdio.h>
#define MATRICE_NB_LIGNES 3
#define MATRICE_NB_COLONNES 4

void remplirMatrice(int matrice[MATRICE_NB_LIGNES][MATRICE_NB_COLONNES]) {
    for(int i = 0; i < MATRICE_NB_LIGNES; i++) {
        for(int j = 0; j < MATRICE_NB_COLONNES; j++) {
            printf("Veuillez saisir la valeur ligne %d, colonne %d :\n", i+1, j+1);
            scanf("%d", &matrice[i][j]);
        }
    }
}

void afficherMatrice(int m[MATRICE_NB_LIGNES][MATRICE_NB_COLONNES]) {
    for(int i = 0; i < MATRICE_NB_LIGNES; i++) {
        for(int j = 0; j < MATRICE_NB_COLONNES; j++) {
            printf("%d\t", m[i][j]);
        }
        printf("\n");
    }
}

void matriceToTab(int matrice[MATRICE_NB_LIGNES][MATRICE_NB_COLONNES], int tab[]) {
    for(int i = 0, k = 0; i < MATRICE_NB_LIGNES; i++) {
        for(int j = 0; j < MATRICE_NB_COLONNES; j++) {
            tab[k++] = matrice[i][j];
        }
    }
}

void afficherTab(int tab[]) {
    for(int i = 0; i < MATRICE_NB_LIGNES * MATRICE_NB_COLONNES; i++) {
        printf("%d ", tab[i]);
    }
}

int main() {
    int matrice[MATRICE_NB_LIGNES][MATRICE_NB_COLONNES];
    int tab[MATRICE_NB_LIGNES * MATRICE_NB_COLONNES];

    remplirMatrice(matrice);

    matriceToTab(matrice, tab);

    printf("Matrice :\n");
    afficherMatrice(matrice);

    printf("Tableau 1D :\n");
    afficherTab(tab);

    return 0;
}

