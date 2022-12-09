#include "Immeuble.h"

int main() {
    Immeuble immeubles[NB_IMMEUBLES_MAX];
    int nbImmeubles;
    nbImmeubles = saisirNombreImmeubles();
    saisirImmeubles(immeubles, nbImmeubles);
    afficherImmeubles(immeubles, nbImmeubles);
    return 0;
}