#include <stdio.h>
int conta(int mat[1][15], int n){
    int c=0;
    for(int i=0; i<n; i++){
        c=0;
        for(int j=0; j<n; j++){
            if(mat[i][j]==1){
                c++;
            }
        }
        if(c==n){
            return c;
        }
    }
    return 0;
}

int main(int argc, char const *argv[])
{
    int n;
    scanf("%d", &n);
    int mat[n][n];
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            scanf("%d", &mat[i][j]);
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(mat[i][j]==1){
                if(mat[i+1][j]==0 && i+1<n){
                    mat[i+1][j]=1;
                    mat[i][j]=0;
                }    
            }
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
    // for(int i=0; i<n; i++){
    //     for(int j=0; j<n; j++){
    //         if(mat[i][j]==1 && conta(mat, n)==n){
    //             mat[i][j]==0;
    //         }
    //     }
    // }
    
    return 0;
}
