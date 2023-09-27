#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n;
    scanf("%d", &n);
    int mat[n][n];
    int s=0, comp=-10000, res;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            scanf("%d", &mat[i][j]);
        }
    }
    for(int i=0; i<n; i++){
        s=0;
        for(int j=0; j<n; j++){
            if(mat[j][i]==1){
                s+=1;
            }
        }
        if(comp<s){
            res=i+1;
            comp=s;
        }
    }
    if(comp==0)
    printf("0\n");
    else
    printf("%d\n", res);
    return 0;
}
