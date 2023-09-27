#include <stdio.h>
int main() {
    int n, m, s, t; 
    m = s = t=1000000;
    scanf("%d", &n);
    int vet[n];
    for(int i=0; i<n; i++){
        int num;
        scanf("%d", &num);
        vet[i]=num;
        if(vet[i]<m){
            t = s;
            s = m;
            m = vet[i];
        } else if(vet[i]<s){
            t = s;
            s = vet[i];
        } else if(vet[i]<t){
            t=vet[i];
        }
    }
    printf("%d\n", s);
    printf("%d\n", t);
    return 0;
}