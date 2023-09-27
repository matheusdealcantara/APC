#include <stdio.h>
// int main() {
//     int m500, m100, m50, m10, m5, m1, p, v;
//     scanf("%d", &p);
//     scanf("%d", &v);
//     v = v - p;
//     m500 = v / 500;
//     v -= m500*500;
//     m100 = v / 100;
//     v -= m100*100;
//     m50 = v / 50;
//     v -= m50*50;
//     m10 = v / 10;
//     v -= m10*10;
//     m5 = v / 5;
//     v -= m5*5;
//     m1 = v / 1;
//     v -= m1*1;
//     printf("%d\n", m500);
//     printf("%d\n", m100);
//     printf("%d\n", m50);
//     printf("%d\n", m10);
//     printf("%d\n", m5);
//     printf("%d\n", m1);
// }

int main(int argc, char const *argv[])
{
    int notas[6] = {500, 100, 50, 10, 5, 1};
    int p, v;
    scanf("%d", &p);
    scanf("%d", &v);
    v = v - p;

    for (int i = 0; i < 6; i++)
    {
        printf("%d\n", v/notas[i]);
        v = v % notas[i]; 
    }
    
    return 0;
}
