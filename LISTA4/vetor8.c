#include <stdio.h>
int main() {
    int n, v, s=0, c=0;
    scanf("%d", &n);
    int vet1[n];
    for(int i=0; i<n; i++){
        scanf("%d", &v);
        vet1[i]=v;
        s+=v;
    }
    int media = s/n;
    for (int i=0; i<n; i++){
        if(vet1[i]>media){
            printf("%d ", vet1[i]);
            c++;
        }
    }
    printf("\n");
    if(c==0){
        printf("0\n");
    }
    return 0;
}