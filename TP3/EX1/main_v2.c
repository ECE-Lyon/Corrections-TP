#include <stdio.h>

int main(void) {
    int entier1 = 0, entier2 = 0, plusGrande = 0;
    printf("Saisissez le premier entier :\n");
    scanf("%d", &entier1);
    printf("Saisissez le deuxieme entier :\n");
    scanf("%d", &entier2);

    if(entier1 > entier2) {
        plusGrande = entier1;
    }
    else {
        plusGrande = entier2;
    }
    printf("%d est la plus grande valeur.\n", plusGrande);
    return 0;
}