#include <stdio.h>
int main(int argc, char const *argv[])
{
    int mapa[10][10], l, c, h;
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            scanf(" %d", &mapa[i][j]);
            if(mapa[i][j]>h){
                h=mapa[i][j];
                l=i;
                c=j;
            }
        }
    }

    char mov;
    int flag=0;

    while(scanf(" %c", &mov)!=EOF){
        getchar();

        switch (mov)
        {
            case 'a':
                c--;
                if(c < 0){
                    flag=1;
                    printf("Bateu na parede\n");
                    break;
                }
                if(mapa[l][c]!=0){
                    flag=1;
                    printf("Bateu em si mesma\n");
                    break;
                } else{
                    printf("Nao bateu\n");
                }
                mapa[l][c]=h+1;
                break;
                
            case 'w':
                l--;
                if(l < 0){
                    flag=1;
                    printf("Bateu na parede\n");
                    break;
                }
                if(mapa[l][c]!=0){
                    flag=1;
                    printf("Bateu em si mesma\n");
                    break;
                } else{
                    printf("Nao bateu\n");
                }
                mapa[l][c]=h+1;
                break;

            case 's':
                l++;
                if(l > 9){
                    flag=1;
                    printf("Bateu na parede\n");
                    break;
                }
                if(mapa[l][c]!=0){
                    flag=1;
                    printf("Bateu em si mesma\n");
                    break;
                } else{
                    printf("Nao bateu\n");
                }
                mapa[l][c]=h+1;
                break;
            
            case 'd':
                c++;
                if(c > 9){
                    flag=1;
                    printf("Bateu na parede\n");
                    break;
                }
                if(mapa[l][c]!=0){
                    flag=1;
                    printf("Bateu em si mesma\n");
                    break;
                } else  {
                    printf("Nao bateu\n"); 
                }
                mapa[l][c]=h+1;
                break;
            case 'p':
                printf("Venceu\n");
                break;
        }
        
        if(flag==1){
            break;
        } else {
            for(int i=0; i<10; i++){
                for(int j=0; j<10; j++){
                    if(mapa[i][j]!=0){
                        mapa[i][j]--;
                    }
                }
            }
        }
        
    }
    return 0;
}
