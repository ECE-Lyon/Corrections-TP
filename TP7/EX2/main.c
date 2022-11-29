#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int getRandomInteger(int min, int max) {
    return rand() % (max - min + 1) + min;
}

int main() {
    srand(time(NULL)); // à faire une seule fois avant le premier appel de rand(), ici c'est idéal !

    for (int i = 0; i < 20; i++) { // Nous allons tirer 20 fois un nombre aléatoire, pour tester
        printf("Tirage numero %d : %d.\n", i + 1, getRandomInteger(10, 30));
    }

    return 0;
}

