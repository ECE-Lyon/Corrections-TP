#include <stdio.h>
#define TARIF_ENFANT 4
#define TARIF_REDUIT 6
#define TARIF_PLEIN 9
#define AGE_ENFANT 12

int main(void) {
    int age = 0, estEtudiant = 0;

    while(1) { // boucle infinie
        printf("Age ? (valeur négative pour quitter)\n");
        scanf("%d", &age);
        if (age < 0) {
            return 0; // met fin à la fonction main, et donc au programme et donc à la boucle
        } else if (age <= AGE_ENFANT) {
            printf("Tarif enfant : %d euros.\n", TARIF_ENFANT);
        } else if (age < 18) {
            // inutile d'écrire : else if (age > 12 && age < 18) car si on arrive à un else (if), c'est que les tests précédents sont faux.
            // interdiction d'écrire (12 < age < 18) car cela est équivalent à ((12 < age) < 18)
            printf("Tarif jeune : %d euros.\n", TARIF_REDUIT);
        } else if (age <= 27) {
            printf("Etudiant(e) ? (0 = non, 1 = oui)\n");
            scanf("%d", &estEtudiant);
            if (estEtudiant) {
                printf("Tarif etudiant : %d euros.\n", TARIF_REDUIT);
            } else {
                printf("Plein tarif : %d euros.\n", TARIF_PLEIN);
            }
        } else if (age >= 65) {
            printf("Tarif senior : %d euros.\n", TARIF_REDUIT);
        } else {
            printf("Plein tarif : %d euros.\n", TARIF_PLEIN);
        }
    }

    return 0;
}