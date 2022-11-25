#include <stdio.h>

int main(void) {
    float note1, note2, note3 = 0.0f; // initialisation facultative car on va les saisir

    do {
        printf("Veuillez saisir la premiere note :\n");
        scanf("%f", &note1);
        if (note1 < 0.0f || note1 > 20.0f) {
            printf("La note doit etre entre 0 et 20, recommencez.\n");
        }
    } while(note1 < 0.0f || note1 > 20.0f);

    // On duplique le bout de code précédent, ce n'est pas bien
    // Il faudra en faire une fonction (cours 4)
    do {
        printf("Veuillez saisir la deuxieme note :\n");
        scanf("%f", &note2);
        if (note2 < 0.0f || note2 > 20.0f) {
            printf("La note doit etre entre 0 et 20, recommencez.\n");
        }
    } while(note2 < 0.0f || note2 > 20.0f);

    do {
        printf("Veuillez saisir la troisieme note :\n");
        scanf("%f", &note3);
        if (note3 < 0.0f || note3 > 20.0f) {
            printf("La note doit etre entre 0 et 20, recommencez.\n");
        }
    } while(note3 < 0.0f || note3 > 20.0f);

    printf("Moyenne : %.2f/20.\n", (note1 + note2 + note3) / 3.0f);

    return 0;
}