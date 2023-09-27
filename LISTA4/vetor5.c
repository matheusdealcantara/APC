#include <stdio.h>
int main() {
    int n, num, p;
    scanf("%d", &n);
    int vet[n];
    for(int i=0; i<n; i++){
        scanf("%d", &num);
        vet[i]=num;
    }
    scanf("%d", &p);

    for(int i=0;i<n;i++){
        if(vet[i]==p){
            printf("pertence\n");
            break;
        } else if(i==n-1 && vet[i]!=p){
            printf("nao pertence\n");
        }
    }
    return 0;
}