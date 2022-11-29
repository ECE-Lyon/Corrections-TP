#include <stdio.h>

#define TAILLE_PHYSIQUE 100

void saisirTailleLogique(int tailleMaximale, int *pNbEntiers) {
    do {
        printf("Combien d'entiers souhaitez-vous saisir ?\n");
        scanf("%d", pNbEntiers);
        if (*pNbEntiers < 0 || *pNbEntiers > tailleMaximale) {
            printf("Erreur, la taille doit etre entre 0 et %d.\n", tailleMaximale);
        }
    } while (*pNbEntiers < 0 || *pNbEntiers > tailleMaximale);
}

void remplirTableauEntiers(int tab[TAILLE_PHYSIQUE], int taille) {
    for (int i = 0; i < taille; i++) {
        printf("Veuillez saisir la valeur de la case %d :\n", i + 1);
        scanf("%d", &tab[i]);
    }
}

// Trois version possibles :
int calculerSommeEtProduitTableauEntiersV1(int tab[TAILLE_PHYSIQUE], int taille, int *pSomme) {
    int produit = taille > 0;
    *pSomme = 0;
    for (int i = 0; i < taille; i++) {
        *pSomme += tab[i];
        produit *= tab[i];
    }
    return produit; // on pourra l'ignorer dans le programme appelant
}

int calculerSommeEtProduitTableauEntiersV2(int tab[TAILLE_PHYSIQUE], int taille, int *pProduit) {
    int somme = 0;
    *pProduit = taille > 0;
    for (int i = 0; i < taille; i++) {
        somme += tab[i];
        *pProduit *= tab[i];
    }
    return somme; // on pourra l'ignorer dans le programme appelant
}

void calculerSommeEtProduitTableauEntiersV3(int tab[TAILLE_PHYSIQUE], int taille, int *pSomme, int *pProduit) {
    *pSomme = 0;
    *pProduit = taille > 0;
    for (int i = 0; i < taille; i++) {
        *pSomme += tab[i];
        *pProduit *= tab[i];
    }
}

int main() {
    int tableauEntiers[TAILLE_PHYSIQUE];
    int nbEntiers; // taille logique
    int somme, produit;
    saisirTailleLogique(TAILLE_PHYSIQUE, &nbEntiers);
    remplirTableauEntiers(tableauEntiers, nbEntiers);

    // 2 façons d'appeler la V1
    produit = calculerSommeEtProduitTableauEntiersV1(tableauEntiers, nbEntiers, &somme);
    calculerSommeEtProduitTableauEntiersV1(tableauEntiers, nbEntiers, &somme);

    // 2 façons d'appeler la V2
    somme = calculerSommeEtProduitTableauEntiersV2(tableauEntiers, nbEntiers, &produit);
    calculerSommeEtProduitTableauEntiersV2(tableauEntiers, nbEntiers, &produit);

    // 1 façon d'appeler la V3
    calculerSommeEtProduitTableauEntiersV3(tableauEntiers, nbEntiers, &somme, &produit);

    return 0;
}