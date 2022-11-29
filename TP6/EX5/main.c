#include <stdio.h>
#include "Point.h"

int main() {
    Point p1 = {2.4f, 6.5f};
    Point p2 = {7.3f, 5.9f};

    afficherPoint(p1);
    afficherPointOptimise(&p2);

    echangerPoints_tres_bien(&p1, &p2);

    afficherPoint(p1);
    afficherPointOptimise(&p2);
    return 0;
}