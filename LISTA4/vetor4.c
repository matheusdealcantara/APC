#include <stdio.h>
int main() {
    int n, num;
    scanf("%d", &n);
    int vet[n];
    for(int i=0; i<n; i++){
        scanf("%d", &num);
        vet[i]=num;
    }
    for(int i=0;i<n;i++){
        if(vet[i]%2==0){
            printf("%d ", i);
        }
    }
    printf("\n");
    for(int i=0;i<n;i++){
        if(vet[i]%2!=0){
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}