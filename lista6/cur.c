#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[])
{
    int n, l, c, posl, posc, t;
    char cur;
    scanf("%d", &n);
    getchar();

    char str[n][1002];
    for(int i=0; i<n; i++){
        fgets(str[i], sizeof(str[i]), stdin);
        str[i][strlen(str[i])-1]=0;
    }
    scanf("%d%d", &l, &c);
    posc=c-1;
    posl=l-1;
    printf("%d\n", posc);
    while(scanf(" %c", &cur)!=EOF){
        getchar();
        posc=c-1;
        if(cur=='j'){
            if(posl+1>n-1){
                posc=t-1;
                printf("%d %d %c\n", posl+1, posc+1, str[posl][posc]);
            } else {
                posl++;
                t=strlen(str[posl]);
                if(posc>=t){
                    posc=t-1;
                    printf("%d %d %c\n", posl+1, posc+1, str[posl][posc]);
                } else {
                    printf("%d %d %c\n", posl+1, c, str[posl][posc]);
                }
                
            }
            printf("tamanho da string %d\n", t);
            printf("posicao da coluna %d\n", posc);
        }
        if(cur=='k'){
            if(posl-1<0){
                posc=t-1;
                printf("%d %d %c\n", posl+1, posc+1, str[posl][posc]);
            }else{
                posl--;
                t=strlen(str[posl]);
                if(posc>=t){
                    posc=t-1;
                    printf("%d %d %c\n", posl+1, posc+1, str[posl][posc]);
                } else {
                    printf("%d %d %c\n", posl+1, c, str[posl][posc]);
                }
                
            }
            printf("tamanho da string %d\n", t);
            printf("posicao da coluna %d\n", posc);
        }
    }
    return 0;
}
