#include <stdio.h>

int main(void) {
    int longueur = 0, largeur = 0;
    printf("Saisissez la longueur :\n");
    scanf("%d", &longueur);
    printf("Saisissez la largeur :\n");
    scanf("%d", &largeur);

    printf("Aire : %d.\n", longueur * largeur);
    printf("Perimetre : %d.\n", (longueur + largeur) * 2);

    return 0;
}