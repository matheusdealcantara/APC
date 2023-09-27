#include <stdio.h>

int main(int argc, char const *argv[])
{
    int x, somapar, somaimpar;

    somaimpar = 0;
    somapar = 0;

    
    while(x != 0) {
        scanf("%d", &x);
        if(x % 2 == 0) {
            somapar += x;
        } else {
            somaimpar += x;
        }
    }

    printf("%d %d\n", somapar, somaimpar);
    return 0;
}
