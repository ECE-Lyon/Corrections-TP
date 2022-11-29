#include <stdlib.h>
#include <stdio.h>
#include "tp8ex2.h"

void remplirTableau(float** pTab, int* pTaille) {
    printf("Combien de notes voulez-vous saisir ?\n");
    scanf("%d", pTaille);
    *pTab = malloc(*pTaille * sizeof(float));
    for (int i = 0; i < *pTaille; i++) {
        printf("Veuillez saisir la note numero %d :\n", i+1);
        scanf("%f", &(*pTab)[i]);
    }
}

void libererTableau(float** pTab) {
    free(*pTab);
    *pTab = NULL;
}

float calculerMoyenne(float* notes, int taille) {
    float somme = 0.0f;
    for (int i = 0; i < taille; i++) {
        somme += notes[i];
    }
    return somme / (float) taille;
}

void afficherNotes(float* notes, int taille) {
    for (int i = 0; i < taille; i++) {
        printf("%f ", notes[i]);
    }
    printf("\n");
}