#include <stdio.h>
int dv(int agencia[]){
    int c = 4, pos=3, res=0;
    for(;c>0; c--, pos--){
        if(c%2==0){
            agencia[pos]*=2;
            while(agencia[pos]>0){
                res+=agencia[pos]%10;
                agencia[pos]/=10;
            }
        } else {
            while(agencia[pos]>0){
                res+=agencia[pos]%10;
                agencia[pos]/=10;
            }
        }
    }
    if(res%10==0) return 0;
    else {
        res=10-(res%10);
    }
    return res;
}
int main(int argc, char const *argv[])
{
    int n[4];
    scanf("%1d%1d%1d%1d", &n[0], &n[1], &n[2], &n[3]);
    printf("%d\n", dv(n));
    return 0;
}

