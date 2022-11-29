#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int getRandomInteger(int min, int max) {
    return rand() % (max - min + 1) + min;
}

int main() {
    srand(time(NULL)); // à faire une seule fois avant le premier appel de rand(), ici c'est idéal !

    int saisie, nombreMystere = getRandomInteger(0, 500);

    do {
        printf("Essayez de trouver le nombre mystere : (ou tapez une valeur negative pour terminer)\n");
        scanf("%d", &saisie);
        if (saisie < 0) {
            printf("Au revoir !\n");
            exit(EXIT_SUCCESS); // met fin au programme (EXIT_SUCCESS vaut 0). Utilisable n'importe où !
            // équivalent à faire return 0; dans le main(), ce qu'on aurait pu faire ici aussi.
        } else if (saisie < nombreMystere) {
            printf("Non... c'est plus !\n");
        } else if (saisie > nombreMystere) {
            printf("Non... c'est moins !\n");
        }
    } while (saisie != nombreMystere);
    printf("Bravo ! C'etait %d.\n", nombreMystere);

    return 0;
}