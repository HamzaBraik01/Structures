#include <stdio.h>
struct Point {
    float x;
    float y;
};

int main() {
   
    struct Point point;
    struct Point *pPoint = &point;

    pPoint->x = 4.5;
    pPoint->y = 3.2;

    printf("Coordonnées du point :\n");
    printf("x = %.2f\n", pPoint->x);
    printf("y = %.2f\n", pPoint->y);

    return 0;
}
