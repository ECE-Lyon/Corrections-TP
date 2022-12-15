// standard input output library
#include <stdio.h>

/**
 * @brief Donnez un algorithme et son logigramme
 * affichant les n premiers entiers naturels impairs.
 * n étant saisi au clavier par l'utilisateur.
 *
 * @return int
 */
int main(void) {

    // declaration & initialisation
    int n = 0;
    int i = 1;
    int counter = 0;

    // assignation
    printf("Saisissez un nombre entier : ");
    scanf("%d", &n);

    // code loop while
    printf("Les %d premiers entiers naturels impairs (while): \n", n);
    counter = 1;
    while (counter <= n) {
        printf("%d \n", i);
        i = i +2;
        counter++;
    }

    printf("Les %d premiers entiers naturels impairs (for): \n", n);

    // code loop for
    for (counter=0; counter < n; counter = counter + 1) {
        // printf("%d \n", counter);
        printf("%d \n", 2*counter + 1);

    }

    // end program
    return 0;
}