#include <stdio.h>
int main() {
    int e1, e2, e3, j1, j2, j3, j4, j5, j6, s1, s2, s3, r1, r2, r3;
    char campeao;
    scanf("%d %d %d", &e1, &j1, &j2);
    scanf("%d %d %d", &e2, &j3, &j4);
    scanf("%d %d %d", &e3, &j5, &j6);

    s1 = j1 + j2;
    s2 = j3 + j4;
    s3 = j5 + j6;

    r1 = s1 % 2;
    r2 = s2 % 2;
    r3 = s3 % 2;

    if (r1 == e1 && r2 == e2) {
        campeao = (r3 == e3) ? 'A' : 'C';
    } else if (r1 == e1 && r2 != e2) {
        campeao = (r3 == e3) ? 'A' : 'D';
    } else if (r1 == e1 && r2 != e2) {
        campeao = (r3 == e3) ? 'A' : 'D';
    } else if (r1 != e1 && r2 != e2) {
        campeao = (r3 == e3) ? 'B' : 'D';
    } else if (r1 != e1 && r2 == e2) {
        campeao = (r3 == e3) ? 'B' : 'C';
    }
    printf("%c\n", campeao);    
    return 0;
}