#include <stdio.h>

#define TAILLE_MAX 100

int saisirTailleLogique(int taillePhysique) {
    int tailleLogique;
    do {
        printf("Combien d'entiers ?\n");
        scanf("%d", &tailleLogique);
    } while (tailleLogique < 0 || tailleLogique > taillePhysique);
    return tailleLogique;
}

void afficherTab(int tab[TAILLE_MAX], int taille) {
    for (int i = 0; i < taille; i++) {
        printf("[%d]", tab[i]);
    }
    printf("\n");
}

int getPlusGrandeValeur(int tab[], int taille) {
    int plusGrandeValeur = -1;
    if(taille > 0) { // si le tableau n'est pas vide,
        // on cherche la plus grande valeur.
        // Sans cela, tableau[0] aurait pu provoquer un bug
        plusGrandeValeur = tab[0];
        for (int i = 1; i < taille; i++) { // si n == 1, on ne rentre pas dans le for car 1 < 1 est faux dès le début
            if (tab[i] > plusGrandeValeur) {
                plusGrandeValeur = tab[i];
            }
        }
    }
    return plusGrandeValeur;
}

void remplirTableau(int tab[], int tailleLogique) {
    for (int i = 0; i < tailleLogique; i++) {
        printf("Saisissez la valeur num %d :\n", i + 1);
        scanf("%d", &tab[i]);
    }
}

int main(void) {
    int tableau[TAILLE_MAX] = {0}; // initialisation facultative
    int n; // taille logique

    n = saisirTailleLogique(TAILLE_MAX);
    remplirTableau(tableau, n);
    afficherTab(tableau, n);
    printf("La plus grande valeur est %d.\n", getPlusGrandeValeur(tableau, n));

    return 0;
}