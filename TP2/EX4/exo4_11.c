// standard input output library
#include <stdio.h>

/**
 * @brief Donnez un algorithme et son logigramme permettant
 * de calculer, sans formule mathématique, la somme des entiers 
 * compris entre un entier A et un autre entier B demandés à l'utilisateur.
 *
 * @return int
 */
int main() {

    // declaration
    int i, a, b, somme;

    // initialisation
    i = a = b = somme = 0;

    // user values
    do {
        printf("Saisissez la valeur de A : ");
        scanf("%d %d", &a, &b);


    } while (a > b);

    // code
    for (i = a; i <= b; i++) {
        somme = somme + i;
    }

    // output
    printf("La somme des nombres entre %d et %d est : %d", a, b, somme);


    return 0;
}