#include "Immeuble.h"
#include <stdio.h>

int saisirNombreImmeubles(void) {
    // on pourrait utiliser :
    // nbImmeubles = saisirEntier("Combien d'immeubles voulez-vous creer ?");
    int nbImmeubles;
    printf("Combien d'immeubles voulez-vous creer ?\n");
    scanf("%d", &nbImmeubles);
    return nbImmeubles;
}

void saisirImmeubles(Immeuble immeubles[NB_IMMEUBLES_MAX], int nb) {
    for(int i = 0; i < nb; i++) {
        immeubles[i] = saisirImmeuble();
    }
}

Immeuble saisirImmeuble(void) {
    Immeuble i;
    i.nbEtages = saisirEntier("Combien d'etages ?");
    i.nbSousSol = saisirEntier("Combien de sous-sols ?");
    i.nbAppartements = saisirEntier("Combien d'appartements ?");
    i.largeur = saisirFloat("Largeur ?");
    i.hauteur = saisirFloat("Hauteur ?");
    i.profondeur = saisirFloat("Profondeur ?");
    printf("Lettre de batiment ?\n");
    scanf("%c", &i.lettre);
    return i;
}

void afficherImmeubles(Immeuble immeubles[NB_IMMEUBLES_MAX], int nb) {
    for (int i = 0; i < nb; i++) {
        afficherImmeuble(immeubles[i]);
    }
}

void afficherImmeuble(Immeuble immeuble) {
    printf("Etages : %d\n", immeuble.nbEtages);
    printf("Sous-sols : %d\n", immeuble.nbSousSol);
    printf("Appartements : %d\n", immeuble.nbAppartements);
    printf("Largeur : %.2fm\n", immeuble.largeur);
    printf("Hauteur : %.2fm\n", immeuble.hauteur);
    printf("Profondeur : %.2fm\n", immeuble.profondeur);
    printf("Lettre : %c\n", immeuble.lettre);
}

int saisirEntier(char* consigne) {
    int n;
    printf("%s\n", consigne);
    scanf("%d", &n);
    return n;
}

float saisirFloat(char* consigne) {
    float n;
    printf("%s\n", consigne);
    scanf("%f", &n);
    return n;
}
