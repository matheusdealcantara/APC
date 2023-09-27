#include <stdio.h>
int main () {
    float x, x1, x2, p1, p2;
    scanf("%f", &x);
    scanf("%f", &x2);
    scanf("%f %f", &p1, &p2);
    x1 = (((p1 + p2)*x) - (x2*p2)) / p1;
    printf("%f\n", x1);
    return 0;
}