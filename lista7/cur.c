#include <stdio.h>
int main(int argc, char const *argv[])
{
    int L;
    scanf(" %d", &L);
    char str[L][1002];
    for(int i=0; i<L; i++){
        scanf(" %[^\n]s", str[i]);
    }
    int li, col;
    scanf(" %d%d", &li, &col);
    li-=1;
    col-=1;
    char pos;
    while (scanf(" %c", &pos)!=EOF)
    {
        int c=col;
        int col=c;
        int tam;
        if(pos=='j'){
            if(li+1<L){
            li++;
            tam=0;
            while (str[li][tam]!=0 && tam<1002)
            {
                tam++;
            }
            for(tam=0; str[li][tam]!=0 && tam<1002; tam++);
            if(tam-1<col){
                col=tam-1;
            }
            printf("%d %d %c\n", li+1, col+1, str[li][col]);
            col=c;
            } else if (tam>0) {
            col=tam-1;
            printf("%d %d %c\n", li+1, col+1, str[li][col]);
            } else {
                printf("%d %d %c\n", li+1, col+1, str[li][col]);
            }
        }
        if(pos=='k'){
            if(li-1>=0){
            li--;
            tam=0;
            while (str[li][tam]!=0)
            {
                tam++;
            }
            if(tam-1<col){
                col=tam-1;
            }
            printf("%d %d %c\n", li+1, col+1, str[li][col]);
            col=c;
            } else if (tam>0) {
            col=tam-1;
            printf("%d %d %c\n", li+1, col+1, str[li][col]);
            } else {
                printf("%d %d %c\n", li+1, col+1, str[li][col]);
            }
        }
    }
    
    return 0;
}
