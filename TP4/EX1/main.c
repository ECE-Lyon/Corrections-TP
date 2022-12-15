// standard input output library
#include <stdio.h>

// Custom libraries
#include "exo1.h"

/**
 * @brief Saisir deux entiers au clavier
 * Afficher le plus grand des deux dans la console
 *
 * @return int
 */
int main() {

    // declaration
    int a, b, res;

    // initialisation
    a = b = res = 0;

    // user values
    printf("Saisissez la valeur A : ");
    scanf("%d", &a);

    printf("Saisissez la valeur B : ");
    scanf("%d", &b);

    res = getMax(a, b);

    printf("La valeur plus grande de %d et %d est : %d \n", a, b, res);

    return 0;
}
