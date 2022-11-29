#include <stdio.h>

void echangerEntiers(int* p1, int* p2) {
    int tmp = *p1;
    *p1 = *p2;
    *p2 = tmp;
}

int main() {
    int a = 4, b = 6;
    printf("a : %d, b : %d.\n", a, b);
    echangerEntiers(&a, &b);
    printf("a : %d, b : %d.\n", a, b);
    return 0;
}