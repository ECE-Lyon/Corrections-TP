#include <stdio.h>
#include "NombreRationnel.h"

NombreRationnel saisirNombreRationnel(void) {
    NombreRationnel n;
    printf("Veuillez saisir le numerateur :\n");
    scanf("%d", &n.numerateur);
    printf("Veuillez saisir le denominateur :\n");
    scanf("%d", &n.denominateur);
    return n;
}

void afficherNombreRationnel(NombreRationnel n) {
    printf("%d/%d\n", n.numerateur, n.denominateur);
}

NombreRationnel multiplier(NombreRationnel n1, NombreRationnel n2) {
    NombreRationnel res;
    res.numerateur = n1.numerateur * n2.numerateur;
    res.denominateur = n1.denominateur * n2.denominateur;
    return res;
}

NombreRationnel additionner(NombreRationnel n1, NombreRationnel n2) {
    NombreRationnel res;
    res.numerateur = n1.numerateur * n2.denominateur + n2.numerateur * n1.denominateur;
    res.denominateur = n1.denominateur * n2.denominateur;
    return res;
}
