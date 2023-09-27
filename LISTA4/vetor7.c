#include <stdio.h>
int main() {
    int n, v, w, s=0;
    scanf("%d", &n);
    int vet1[n], vet2[n];
    for(int i=0; i<n; i++){
        scanf("%d", &v);
        vet1[i]=v;
    }

    for(int i=0; i<n; i++){
        scanf("%d", &w);
        vet2[i]=w;
    }

    for(int i=0; i<n; i++){
        if(vet1[i]==vet2[i]){
            s++;
        }
    }

    if(s==n){
        printf("sim\n");
    } else{
        printf("nao\n");
    }
    return 0;
}