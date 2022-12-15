// standard input output library
#include <stdio.h>

/**
 * @brief Nombre n à la puissance 5
 * 
 * @return int 
 */
int main(){

    // declaration & initialisation
    int res = 1;
    int n = 0;

    // assignation by user
    printf("Saisissez un nombre entier : ");
    scanf("%d", &n);

    // code
    for (int i = 1; i <= 5; ++i) {
        res = res * n;
    }

    // output
    printf("Résultat : %d", res);

    // end program
    return 0;
}