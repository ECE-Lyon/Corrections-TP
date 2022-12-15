// standard input output library
#include <stdio.h>

// custom library
#include "exo2.h"

int multipleAB(int a, int b) {
    return a % b == 0 ? 'Y' : 'N';
}

/**
 * @brief Saisir un entier dans le main
 * prend deux nombres en paramètres et qui retourne vrai
 * (1) si le premier nombre passé en paramètres est un multiple
 * du second, faux (0) sinon.
 * Indiquer si l'entier saisi par l'utilisateur est un multiple de
 * 3 en utilisant la fonction créée et déterminer
 * s'il est supérieur ou égal à 10 (10 devra être une constante dans le programme).
 * @return
 */
int main() {

    // declaration & initialisation
    int n = 0;
    int res = 0;
    // 10 devra être une constante dans le programme
    int const limite = 10;

    // Input
    // Saisir un entier
    n = saisirEntier();

    // Indiquer si l'entier saisi par l'utilisateur
    // est un multiple de trois
    res = multipleAB(n, 3);

    // output
    printf("%d est multiple de 3 ? %c\n", n, res);
    printf("%d est est supérieur ou égal à %d ? %d ", n, limite, n>=limite);

    return 0;
}