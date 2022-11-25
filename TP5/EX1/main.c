#include <stdio.h>
#include "NombreRationnel.h"

int main() {
    NombreRationnel n1;
    NombreRationnel n2 = {0}; // Initialisation facultative de toutes les valeurs à 0
    n1 = saisirNombreRationnel();
    n2 = saisirNombreRationnel();

    printf("Nombre 1 : ");
    afficherNombreRationnel(n1);
    printf("Nombre 2 : ");
    afficherNombreRationnel(n2);

    printf("Multiplication : ");
    NombreRationnel resMult = multiplier(n1, n2);
    afficherNombreRationnel(resMult);

    printf("Addition : ");
    afficherNombreRationnel(additionner(n1, n2));

    return 0;
}

