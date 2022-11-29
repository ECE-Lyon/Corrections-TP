#include <stdio.h>
#include "tp8ex2.h"

int main(void) {
    float* notes = NULL;
    int nbNotes;
    remplirTableau(&notes, &nbNotes);
    afficherNotes(notes, nbNotes);
    printf("Moyenne : %.2f.\n", calculerMoyenne(notes, nbNotes));
    libererTableau(&notes);
    return 0;
}