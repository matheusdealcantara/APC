#include <stdio.h>
#include <math.h>

int main() {
    unsigned long long int t;
    int g;
    scanf("%llu %d", &t, &g);
    for(; g>0; g--){
        t = sqrt(t);
        if(t%2==0) {
            t-=1;
        } else {
            t = (2*t)-1;
        }
        t *= t;
        printf("%llu\n", t);
    }
    return 0;
}