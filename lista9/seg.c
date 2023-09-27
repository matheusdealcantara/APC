#include <stdio.h>
int encaixa(int a, int b){
    int s1=0, s2=0;
    while(b>0){
        if(a%10==b%10){
            s1+=a%10;
            s2+=b%10;
            a/=10;
            b/=10;
        } else {
            return 0;
        }
    }
    if(s1==s2) return 1;
    return 0;
}

int segmento(int a, int b){
    if(a==b){
        return 1;
    }
    if(a<b){
        while(b>=a){
            if(encaixa(b, a)){
                return 1;
            } else {
                b/=10;
            }
        }
        return 0;
    }
    if(a>b){
        while(a>=b){
            if(encaixa(a, b)){
                return 1;
            } else {
                a/=10;
            }
        }
        return 0;
    }
    return 0;
}

int main(int argc, char const *argv[])
{
    printf("%d\n", encaixa(1123, 123));
    printf("%d\n", segmento(1123, 123));
    return 0;
}
