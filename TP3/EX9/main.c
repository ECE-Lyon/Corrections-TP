#include <stdio.h>

int main(void) {
    int nbPierres, i, nbEtages = 0;

    printf("Combien de pierres avez-vous ?\n");
    scanf("%d", &nbPierres);

//  for (i = 1; nbPierres >= i*i; i++) {
    for (i = 1; nbPierres - i * i >= 0; i++) {
        nbEtages++;
        nbPierres -= i * i; // nbPierres = nbPierres - i*i;
    }

    printf("Vous pouvez faire %d etages et il restera %d pierres.\n", nbEtages, nbPierres);

    return 0;
}