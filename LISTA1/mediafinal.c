#include <stdio.h>

int main() {
    float p1, p2, p3, T, l1, l2, l3, l4, l5, mL, mF;
    scanf("%f %f %f", &p1, &p2, &p3);
    scanf("%f", &T);
    scanf("%f %f %f %f %f", &l1, &l2, &l3, &l4, &l5);
    mL = (l1 + l2 + l3 + l4 + l5) / 10;
    mF = ((p1 + (p2*2) + (p3*3) + (T*2)) / 8) + mL;
    printf("%.2f\n", mF);
    return 0;
}