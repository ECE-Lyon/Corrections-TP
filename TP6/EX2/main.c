#include <stdio.h>

int quotientEtResteV1(int a, int b, int* pQuotient) {
    *pQuotient = a / b;
    return a % b;
}

int quotientEtResteV2(int a, int b, int* pReste) {
    *pReste = a % b;
    return a / b;
}

void quotientEtResteV3(int a, int b, int* pQuotient, int* pReste) {
    *pReste = a % b;
    *pQuotient = a / b;
}

int main() {
    // Dans la suite du programme, on initialise les variables à -1 pour vérifier si elles sont mises à jour.
    // Si -1 est affiché, c'est qu'elles n'ont pas été modifiées

    /****** version 1 ******/
    int quotientV1 = -1; // on est obligé d'avoir un entier pour pouvoir donner son adresse à quotientEtResteV1()
    int resteV1 = -1;
    resteV1 = quotientEtResteV1(5, 2, &quotientV1); // on pourrait ignorer le reste retourné
    printf("Pour 5/2, le quotient est %d et le reste est %d.\n", quotientV1, resteV1);

    /****** version 2 ******/
    int quotientV2 = -1;
    int resteV2 = -1; // on est obligé d'avoir un entier pour pouvoir donner son adresse à quotientEtResteV2()
    quotientEtResteV2(5, 2, &resteV2); // on ignore le quotient qui est retourné
    printf("Pour 5/2, le quotient est %d et le reste est %d.\n", quotientV2, resteV2);
    quotientV2 = resteV2 = -1; // on les remet à -1 pour voir si elles vont être modifiées
    quotientV2 = quotientEtResteV2(8, 3, &resteV2); // on n'ignore pas le quotient qui est retourné
    printf("Pour 8/3, le quotient est %d et le reste est %d.\n", quotientV2, resteV2);

    /****** version 3 ******/
    int quotientV3 = -1;
    int resteV3 = -1;
    quotientEtResteV3(5, 2, &quotientV3, &resteV3);
    printf("Pour 5/2, le quotient est %d et le reste est %d.\n", quotientV3, resteV3);

    return 0;
}