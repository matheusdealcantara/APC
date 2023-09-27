#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a, b;
    scanf("%d%d", &a, &b);
    if(a==b) {
        printf("empate\n");
        return 0;
    }
    switch (a)
    {
    case 0:
        if(b==5){
            printf("A\n");
        } else printf("B\n");
        break;

    case 1:
        if(b==4 || b==0){
            printf("A\n");
        } else printf("B\n");
        break;

    case 2:
        if(b==0 || b==1 || b==3 || b==4){
            printf("A\n");
        } else printf("B\n");
        break;

    case 3:
        if(b==0 || b==1 || b==4 || b==5){
            printf("A\n");
        } else printf("B\n");
        break;
    
    case 4:
        if(b==5 || b==0){
            printf("A\n");
        } else printf("B\n");
        break;

    case 5:
        if(b==2 || b==1){
            printf("A\n");
        } else printf("B\n");
        break;
    }
    return 0;
}
