#include <stdio.h>

int main(void) {
    int entier1 = 0, entier2 = 0;
    printf("Saisissez le premier entier :\n");
    scanf("%d", &entier1);
    printf("Saisissez le deuxieme entier :\n");
    scanf("%d", &entier2);

    // Avec un test ternaire
    printf("%d est la plus grande valeur.\n", entier1 > entier2 ? entier1 : entier2);
    return 0;
}