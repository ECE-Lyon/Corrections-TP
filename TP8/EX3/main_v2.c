#include <stdlib.h>
#include <time.h>
#include "tp8ex3.h"

int** allouerMatrice(int nbLignes, int nbColonnes) {
    int** m = NULL;
    m = calloc(nbLignes, sizeof(int *));
    for (int i = 0; i < nbLignes; i++) {
        m[i] = malloc(nbColonnes * sizeof(int));
    }
    return m;
}

int main(void) {
    srand(time(NULL));
    int** matrice = NULL;
    int nbLignes, nbColonnes;
    demanderTaille(&nbLignes, &nbColonnes);
    // Allocation
    matrice = allouerMatrice(nbLignes, nbColonnes);
    // Remplissage
    remplirMatrice(matrice, nbLignes, nbColonnes);
    // Affichage
    afficherMatrice(matrice, nbLignes, nbColonnes);
    // Libération
    libererMatrice(&matrice, nbLignes);
    return 0;
}