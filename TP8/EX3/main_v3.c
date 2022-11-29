#include <stdlib.h>
#include <time.h>
#include "tp8ex3.h"

void allouerMatrice(int ***matrice, int nbLignes, int nbColonnes) {
    *matrice = calloc(nbLignes, sizeof(int *));
    for (int i = 0; i < nbLignes; i++) {
        (*matrice)[i] = malloc(nbColonnes * sizeof(int));
    }
}

int main(void) {
    srand(time(NULL));
    int **matrice = NULL;
    int nbLignes, nbColonnes;
    demanderTaille(&nbLignes, &nbColonnes);
    // Allocation
    allouerMatrice(&matrice, nbLignes, nbColonnes);
    // Remplissage
    remplirMatrice(matrice, nbLignes, nbColonnes);
    // Affichage
    afficherMatrice(matrice, nbLignes, nbColonnes);
    // Libération
    libererMatrice(&matrice, nbLignes);
    return 0;
}