#ifndef TP4_NOMBRERATIONNEL_H
#define TP4_NOMBRERATIONNEL_H

typedef struct {
    int numerateur, denominateur;
} NombreRationnel;

NombreRationnel saisirNombreRationnel(void);
void afficherNombreRationnel(NombreRationnel n);
NombreRationnel multiplier(NombreRationnel n1, NombreRationnel n2);
NombreRationnel additionner(NombreRationnel n1, NombreRationnel n2);

#endif //TP4_NOMBRERATIONNEL_H
