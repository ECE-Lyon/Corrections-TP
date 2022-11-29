#include <stdio.h>
#include <stdlib.h>

int main() {
    int taille;
    int *tableau = NULL;
    printf("Combien d'entiers ?\n");
    scanf("%d", &taille);
    tableau = calloc(taille, sizeof(int));
    for (int i = 0; i < taille; i++) {
        printf("Case %d : %d.\n", i, tableau[i]);
    }
    free(tableau);
    tableau = NULL;
    return 0;
}