#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n, np, s=0, o=0;
    scanf("%d %d", &n, &np);
    char mat[n][82], res[np][82];
    for(int i=0; i<n; i++){
        scanf("%s", mat[i]);
    }
    for(int i=0; i<np; i++){
        scanf("%s", res[i]);
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<np; j++){
            int t1=0, t2=0;
            while (mat[i][t1]!=0)
            {
                t1++;
            }
            while (res[j][t2]!=0)
            {
                t2++;
            }

            if(t1==t2)
            for(int k=0; k<=t2; k++){
                if(mat[i][k]==res[j][k]){
                    s=1;
                } else {
                    s=0;
                    break;
                }
            }
            if(s==1)
            o++;
        }
    }
    if(o>0)
    printf("1\n");
    else
    printf("0\n");
    return 0;
}
