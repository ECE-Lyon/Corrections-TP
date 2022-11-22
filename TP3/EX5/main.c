#include <stdio.h>

int main(void) {
    int choix = 0;

    do {
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
            default: {
                printf("Choix invalide");
                break; // facultatif
            }
        }
    } while (choix > 0);s

    return 0;
}