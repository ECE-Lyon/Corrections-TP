#ifndef MINI_PROJET_IMMEUBLE_H
#define MINI_PROJET_IMMEUBLE_H

#define NB_IMMEUBLES_MAX 100

typedef struct {
    float largeur, hauteur, profondeur;
    int nbEtages, nbSousSol, nbAppartements;
    char lettre;
} Immeuble;

// Prototypes issus de la DTI :
int saisirNombreImmeubles(void);
void saisirImmeubles(Immeuble immeubles[NB_IMMEUBLES_MAX], int nb);
void afficherImmeubles(Immeuble immeubles[NB_IMMEUBLES_MAX], int nb);

// Prototypes issus de l'ACD :
Immeuble saisirImmeuble(void);
void afficherImmeuble(Immeuble immeuble);
int saisirEntier(char* consigne);
float saisirFloat(char* consigne);

#endif