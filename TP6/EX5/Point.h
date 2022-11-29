#ifndef TP8EX1_POINT_H
#define TP8EX1_POINT_H

typedef struct {
    float x, y;
} Point;

void afficherPoint(Point p);
void afficherPointOptimise(const Point* p);
void echangerPoints_pas_bien1(float* x1, float* y1, float* x2, float* y2);
void echangerPoints_pas_bien2(Point* p1, Point* p2);
void echangerPoints_tres_bien(Point* p1, Point* p2);


#endif