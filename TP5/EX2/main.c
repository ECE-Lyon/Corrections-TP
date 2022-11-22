#include <stdio.h>

#define TAILLE_MAX 100

int main(void) {
    int tableau[TAILLE_MAX] = {0}; // initialisation facultative
    int n; // taille logique
    int plusGrandeValeur, i;

    do {
        printf("Combien d'entiers ?\n");
        scanf("%d", &n);
    } while (n < 0 || n > TAILLE_MAX);

    for (i = 0; i < n; i++) {
        printf("Saisissez la valeur num %d :\n", i + 1);
        scanf("%d", &tableau[i]);
    }

    for (i = 0; i < n; i++) {
        printf("[%d]", tableau[i]);
    }

    if(n > 0) { // si le tableau n'est pas vide,
        // on cherche la plus grande valeur.
        // Sans cela, tableau[0] aurait pu provoquer un bug
        plusGrandeValeur = tableau[0];
        for (i = 1; i < n; i++) { // si n == 1, on ne rentre pas dans le for car 1 < 1 est faux dès le début
            if (tableau[i] > plusGrandeValeur) {
                plusGrandeValeur = tableau[i];
            }
        }
        printf("La plus grande valeur est %d.\n", plusGrandeValeur);
    }

    return 0;
}