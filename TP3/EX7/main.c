#include <stdio.h>

int main(void) {
    int nombreClasses = 0; // initialisations facultatives
    int nbElevesDansClasse = 0;
    int nombreElevesTotal = 0; // Initialisation obligatoire pour ne pas commencer la somme à une valeur autre que 0 !

    printf("Combien de classes ?\n");
    scanf("%d", &nombreClasses);

    for (int i = 0; i < nombreClasses; i++) {
        printf("Combien d'eleves dans la classe %d ?\n", i + 1);
        scanf("%d", &nbElevesDansClasse);
        nombreElevesTotal += nbElevesDansClasse;
    }

    printf("Il y a %d eleves dans votre ecole.\n", nombreElevesTotal);

    return 0;
}