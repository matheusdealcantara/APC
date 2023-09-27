#include <stdio.h>
int main() {
    int n, num, idx, m=1000000;
    scanf("%d", &n);
    int vet[n];
    for(int i=0; i<n; i++){
        scanf("%d", &num);
        vet[i]=num;
        if(vet[i]<m){
            m=vet[i];
            idx = i;
        }
    }
    printf("%d\n", idx);
    return 0;
}