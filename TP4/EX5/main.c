// standard input output library
#include <stdio.h>
#include "exo2.h"

#define NB_NOTES 3

/**
 * Fonction qui retourne la moyenne de trois notes
 * si sont comprises entre 0 et 20, sinon -1.
 * @param a première note
 * @param b deuxième note
 * @param c troisième note
 * @return moyenne si 0<a,b,c<20
 *         -1 si non
 */
float calculMoyenne(int a, int b, int c); // definition

/**
 * @brief Exo 6
 * - Saisir trois notes sur 20 (ex : 13,4)  au clavier.
 * - Calculer la moyenne des notes en prenant soin de
 *  vérifier que chaque note soit bien comprise entre 0 et 20
 *  (une nouvelle note est demandée à l'utilisateur tant
 *  qu'elle n'est pas conforme
 *
 * @return int
 */
int main() {

    // declaration
    int note1, note2, note3;
    float moyenne;

    // initialisation
    moyenne = 0;
    printf("Note 1, ");
    note1 = saisirEntier();
    printf("Note 2, ");
    note2 = saisirEntier();
    printf("Note 3, ");
    note3 = saisirEntier();

    // code
    moyenne = calculMoyenne(note1, note2, note3);

    // output
    printf("La moyenne est : %f", moyenne );

    // end program
    return 0;
}

// declaration
float calculMoyenne(int a, int b, int c){
    if (a<0 || a>20 || b<0 || b>20 || c<0 || c>20) {
        return -1;
    }
    else{
        return (float)(a+b+c)/3;
    }
}