#include <stdio.h>
#include <string.h>

#define MAX_CARAC 100

void saisirMot(char *str) {
    printf("Veuillez saisir un mot :\n"); // Si on saisit une phrase, seul le premier mot sera pris
    scanf("%s", str);
    // Pas besoin de retourner, les tableaux sont passés par adresse (ce sont des pointeurs)
}

void saisirCaractere(char *c) {
    printf("Veuillez saisir un caractere :\n");
    scanf("%c", c); // ou scanf("%c", &*c);
}

void saisirPhrase(char *str, int tailleMax) {
    printf("Veuillez saisir une phrase :\n");
    fgets(str, tailleMax, stdin);
    // fgets lit une ligne entière (avec espaces) en veillant à ne pas dépasser la taille du tableau de char (en mettant le '\0').
    // Si la phrase ne dépasse pas la taille physique, un '\n' (touche Entrée) est ajouté à la fin, nous allons l'enlever :
    if (str[strlen(str) - 1] == '\n') {
        str[strlen(str) - 1] = '\0'; // on remplace le retour à la ligne par un '\0'
    }
}

int compterOccurs(char *str, char c) {
    int compteur = 0;
//  for (int i = 0; i < strlen(str); i++) { // OU :
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == c) {
            compteur++;
        }
    }
    return compteur;
}

int main() {
    char texte[MAX_CARAC];
    char caractereAChercher;

    saisirPhrase(texte, MAX_CARAC);
    saisirCaractere(&caractereAChercher);

    printf("Il y a %d fois le caractere '%c' dans \"%s\".\n", compterOccurs(texte, caractereAChercher),
           caractereAChercher, texte);

    return 0;
}

