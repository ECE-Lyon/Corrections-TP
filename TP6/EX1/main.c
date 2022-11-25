#include <stdio.h>

void initialiserEntierEtReel(int* e, float* r) {
    *e = 0;
    *r = 0.0f;
}

int main() {
    int entier;
    float reel;

    printf("Avant initialisation (ils sont peut-etre deja a 0, par hasard...) :\n");
    printf("Entier : %d, Reel : %f.\n", entier, reel);
    initialiserEntierEtReel(&entier, &reel);
    printf("Apres initialisation :\n");
    printf("Entier : %d, Reel : %f.\n", entier, reel);

    return 0;
}

