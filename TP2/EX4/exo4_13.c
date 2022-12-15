// standard input output library
#include <stdio.h>

/**
 * @brief Donnez un algorithme et son logigramme affichant 
 * les premiers entiers naturels impairs strictement 
 * inférieurs à n. n étant saisi au clavier par l'utilisateur.
 *
 * @return int
 */
int main (void){

    // declaration & initialisation
    int n = 0;
    int i = 1;

    // assignation by user
    printf("Saisissez un nombre entier : ");
    scanf("%d", &n);

    // code loop while
    printf("Les premiers entiers naturels impairs inférieurs à %d (while): \n", n);
    while (i <= n) {
        printf("%d \n", i);
        i = i +2;
    }

    // code loop for
    printf("Les premiers entiers naturels impairs inférieurs à %d (for): \n", n);
    for (i = 1; i < n; i = i + 2 ) {
        printf("%d \n", i);
    }

    // end program
    return 0;
};