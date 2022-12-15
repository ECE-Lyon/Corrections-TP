// standard input output library
#include <stdio.h>

// custom library
#include "exo2.h"

/**
 * Calcul l'aire d'un rectangle
 * @param l longueur
 * @param w largeur
 * @return int aire
 */
int calculAire(int l, int w){
    return l*w;
}

/**
 * Calcul le périmètre d'un rectangle
 * @param l longueur
 * @param w largeur
 * @return int périmètre
 */
int calculPerimetre(int l, int w){
    return 2 * (l + w);
}

/**
 * @brief Saisir la largeur et la longueur d'un
 * rectangle au clavier. Afficher le périmètre
 * et l'aire de ce rectangle dans la console
 *
 * @return int
 */
int main() {

    // declaration
    int largeur, longueur, aire, perimetre;

    // initialisation
    largeur = longueur = aire = perimetre = 0;

    // user values
    printf("Largeur, ");
    largeur = saisirEntier();

    printf("Longueur, ");
    longueur = saisirEntier();

    // code
    aire = calculAire(longueur, largeur);
    perimetre = calculPerimetre(longueur, largeur);

    // ouput
    printf("Aire : %d \n", aire);
    printf("Perimetre : %d \n", perimetre);

    return 0;
}