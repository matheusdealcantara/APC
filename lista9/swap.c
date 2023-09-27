#include <stdio.h>
void swap(int *a, int *b){
    int y=*b; 
    *b=*a;
    *a=y;
}

void swapmax3(int *a, int *b, int *c){
    if(*a<*c)swap(a, c);
    if(*b>*a)swap(a, b);
    if(*c>*b)swap(c, b);
}

int main(int argc, char const *argv[])
{
    int a, b, c;
    printf("Digite 3 números separados por espaço para ordená-los\n");
    while(scanf("%d %d %d", &a, &b, &c)!=EOF){
        swapmax3(&a, &b, &c);
        printf("%d %d %d\n", a, b, c);
    }

    return 0;
}
