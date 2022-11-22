#include <stdio.h>

int main(void) {
    int entier = 0;
    const int mult = 3;
    printf("Veuillez saisir un entier :\n");
    scanf("%d", &entier);

    // mult = 4; // impossible car mult est une constante.

    if(entier % mult == 0 && entier >= 10) {
        printf("%d est a la fois multiple de %d et superieur ou egal a 10.\n", entier, mult);
    }
    else {
        printf("%d n'est pas multiple de %d ou n'est pas superieur ou egal a 10.\n", entier, mult);
    }

    return 0;
}