#include <stdio.h>

int main(void) {
    char carac1 = 0, carac2 = 0, tmp = 0;
    printf("Veuillez saisir le premier caractere :\n");
    scanf("%c", &carac1);
    printf("Veuillez saisir le second caractere :\n");
    scanf(" %c", &carac2); // sans espace devant %c, le deuxieme scanf n'est pas effectué... (en theorie, il est inutile)

    printf("carac1 vaut '%c' et carac2 vaut '%c'.\n", carac1, carac2);

    tmp = carac1;
    carac1 = carac2;
    carac2 = tmp;

    printf("Apres echange :\n");
    printf("carac1 vaut '%c' et carac2 vaut '%c'.\n", carac1, carac2);
    return 0;
}