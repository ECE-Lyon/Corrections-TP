// standard input output library
#include <stdio.h>

/**
 * @brief Donnez un algorithme et son logigramme demandant à
 * l'utilisateur un nombre entier, * avant de lui afficher
 * sa valeur au carré.
 *
 * @return int
 */
int main(){

    // declaration & initialisation
    int n = 0;

    // assignation
    printf("Saisissez un nombre entier : ");
    scanf("%d", &n);

    // code
    printf("La valeur au carré de ce nombre est %d", n*n);

    // exit
    return 0;
}