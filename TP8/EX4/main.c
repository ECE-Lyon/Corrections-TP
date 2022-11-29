#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAILLE_MAX_STR 50
#define NB_MOTS 10

void afficherMots(char* mots[], int nbMots) {
    for (int i = 0; i < nbMots; i++) {
        printf("Mot numero %d : \"%s\".\n", i + 1, mots[i]);
    }
}

void saisirMots(char* mots[], int nbMots) {
    char str[TAILLE_MAX_STR];
    for (int i = 0; i < nbMots; i++) {
        printf("Veuillez saisir le mot numero %d :\n", i + 1);
        scanf("%s", str);
        // Allocation du tableau de la bonne taille pour le mot saisi :
        mots[i] = malloc((strlen(str)+1) * sizeof(char)); // +1 pour le '\0'
        strcpy(mots[i], str); // on recopie le mot dans son nouvel espace
    }
}

void libererMots(char* mots[], int nbMots) {
    for (int i = 0; i < nbMots; i++) {
        free(mots[i]);
        mots[i] = NULL;
    }
}

int main(void) {
    char* mots[NB_MOTS] = {0};
    saisirMots(mots, NB_MOTS);
    afficherMots(mots, NB_MOTS);
    libererMots(mots, NB_MOTS);
    return 0;
}