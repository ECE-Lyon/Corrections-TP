#include <stdio.h>

int main(void) {
    int choix = 0;

    while(1) { // boucle infinie
        printf("Que voulez-vous ?\n");
        printf("1: Coca-Cola\n");
        printf("2: Coca-Cola\n");
        printf("3: Iced-Tea\n");
        printf("10: Expresso\n");
        printf("11: Capuccino\n");
        scanf("%d", &choix);
        switch (choix) {
            case 1:
            case 2: {
                printf("Coca-Cola\n");
                break;
            }
            case 3: {
                printf("Iced-Tea\n");
                break;
            }
            case 10: {
                printf("Expresso\n");
                break;
            }
            case 11: {
                printf("Capuccino\n");
                break;
            }
            case 0: {
                return 0; // met immédiatement fin à la fonction main() et donc au programme
                // le break; est inutile car après un return il serait de toute façon inaccessible
            }
            default: {
                printf("Choix invalide");
                break; // break; facultatif car il n'y a plus de case après
            }
        }
    }

    // Le return 0; est plus haut, le principal c'est de l'atteindre !
}