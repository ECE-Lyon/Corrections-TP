#include <stdio.h>
#include "Point.h"

void afficherPoint(Point p) {
    printf("Point : x = %.2f, y = %.2f.\n", p.x, p.y);
}


// La procédure suivante est une optimisation de la procédure précédente.
// afficherPoint prend en paramètre un Point (8 octets (2 x 4 octets), cela veut dire que 8 octets sont copiés lors de l'appel de cette procédure.
// afficherPointOptimise prend une adresse (4 octets), ce qui est plus léger !
// Cependant, le passage par adresse donne la possibilité à afficherPointOptimise de modifier notre Point...
// Le const rend le Point pointé constant, cela veut dire que même s'il est passé par adresse, nous ne pourrons pas le modifier dans afficherPointOptimise.
// Ici, l'optimisation n'est pas vraiment utile, mais pour de plus grosse structure, cela a du sens.
void afficherPointOptimise(const Point* p) {
    // p->x = 6.7f; impossible car le Point pointé par p est rendu constant dans cette procédure ! Plus léger et sans danger !
    printf("Point : x = %.2f, y = %.2f.\n", p->x, p->y);
}

void echangerPoints_pas_bien1(float* x1, float* y1, float* x2, float* y2) { // possible mais pas bien... (la structure n'est pas exploitée...)
    // La structure n'est pas exploitée, autant ne pas la créer...
    // Et si un jour on rajoute un attribut à Point, il faudra rajouter des paramètres et modifier le code, pas bien du tout !
    float tmp = *x1;
    *x1 = *x2;
    *x2 = tmp;

    tmp = *y1;
    *y1 = *y2;
    *y2 = tmp;
}

void echangerPoints_pas_bien2(Point* p1, Point* p2) {
    // Si un jour on ajoute des attributs à Point, on devra modifier cette procédure, pas bien !
    float tmp = p1->x;
    p1->x = p2->x;
    p2->x = tmp;

    tmp = p1->y;
    p1->y = p2->y;
    p2->y = tmp;
}

void echangerPoints_tres_bien(Point* p1, Point* p2) {
    // Si un jour on rajoute un attribut à Point, il n'y aura rien à changer ici, génial !
    Point tmp = *p1;
    *p1 = *p2;
    *p2 = tmp;
}