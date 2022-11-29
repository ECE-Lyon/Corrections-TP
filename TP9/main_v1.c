#include <stdio.h>
#define TP 5

typedef struct {
    float maths, c, web;
} Etudiant;

void sauvegarderTexte(Etudiant etudiants[], int taille) {
    FILE* fichier = fopen("../notes.txt", "w");

    fprintf(fichier, "%d\n", taille);
    for (int i = 0; i < taille; i++) {
        fprintf(fichier, "%f %f %f\n", etudiants[i].maths, etudiants[i].c, etudiants[i].web);
    }

    fclose(fichier);
    fichier = NULL;
}

void chargerTexte(Etudiant etudiants[], int* pTaille) {
    FILE* fichier = fopen("../notes.txt", "r");

    fscanf(fichier, "%d", pTaille);
    for (int i = 0; i < *pTaille; i++) {
        fscanf(fichier, "%f %f %f", &etudiants[i].maths, &etudiants[i].c, &etudiants[i].web);
    }

    fclose(fichier);
    fichier = NULL;
}

void sauvegarderBinaire(Etudiant etudiants[], int taille) {
    FILE* fichier = fopen("../notes.ece", "w");

    fwrite(&taille, sizeof(int), 1, fichier);
    fwrite(etudiants, sizeof(Etudiant), taille, fichier);

    fclose(fichier);
    fichier = NULL;
}

void chargerBinaire(Etudiant etudiants[], int* pTaille) {
    FILE* fichier = fopen("../notes.ece", "r");

    fread(pTaille, sizeof(int), 1, fichier);
    fread(etudiants, sizeof(Etudiant), *pTaille, fichier);

    fclose(fichier);
    fichier = NULL;
}

void changerNoteEnCDeLEtudiant(int indice, float nouvelleNote) {
    FILE* fichier = fopen("../notes.ece", "r+");

    fseek(fichier, 1*sizeof(int) + indice*sizeof(Etudiant) + 1*sizeof(float), SEEK_SET);
    fwrite(&nouvelleNote, sizeof(float), 1, fichier);

    fclose(fichier);
    fichier = NULL;
}

int main() {
    Etudiant etudiants[TP];
    int taille = 0;

    /*etudiants[0].maths = 10.0f;
    etudiants[0].c = 10.25f;
    etudiants[0].web = 10.5f;
    etudiants[1].maths = 11.0f;
    etudiants[1].c = 11.25f;
    etudiants[1].web = 11.5f;
    etudiants[2].maths = 12.0f;
    etudiants[2].c = 12.25f;
    etudiants[2].web = 12.5f;
    etudiants[3].maths = 13.0f;
    etudiants[3].c = 13.25f;
    etudiants[3].web = 13.5f;
    etudiants[4].maths = 14.0f;
    etudiants[4].c = 14.25f;
    etudiants[4].web = 14.5f;
    taille = TP;
    sauvegarderTexte(etudiants, taille);
    chargerTexte(etudiants, &taille);
    sauvegarderBinaire(etudiants, taille);
    chargerBinaire(etudiants, &taille);*/

    changerNoteEnCDeLEtudiant(2, 15.5f);
    chargerBinaire(etudiants, &taille);

    for (int i = 0; i < taille; i++) {
        printf("Etudiant : %.2f, %.2f, %.2f.\n", etudiants[i].maths, etudiants[i].c, etudiants[i].web);
    }

    return 0;
}