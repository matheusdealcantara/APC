#include <stdio.h>
#include <math.h>

int divisor(int a, int b){
    if(a==b){
        return 0;
    }
    if((a==2 && b%2==0) || (b==2 && a%2==0)){
        return 0;
    }
    if(a>b){
        for(int i=2; i*i<=a && b/i!=0; i++){
            if(a%i==0 && b%i==0){
                return 0;
            }
        }
        return 1;
    }
    if(b>a){
        for(int i=2; i*i<=b && a/i!=0; i++){
            if(a%i==0 && b%i==0){
                return 0;
            }
        }
        return 1;
    }
    return 0;
}

int main(int argc, char const *argv[])
{
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d\n", divisor(a, b));
    return 0;
}
