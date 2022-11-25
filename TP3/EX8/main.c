#include <stdio.h>

int main(void) {
    int saisie = 0; // Initialisation facultative

    do {
        printf("Veuillez saisir un nombre multiple de 7 et de 2 :\n");
        scanf("%d", &saisie);
    } while (saisie % 2 || saisie % 7); // OU :
//  } while (!(entier % 2 == 0 && entier % 7 == 0));
//  } while (entier % 2 != 0 || entier % 7 != 0);
//  car !(A&&B) équivalent à !A||!B

    printf("%d est bien multiple de 2 et de 7.\n", saisie);

    return 0;
}