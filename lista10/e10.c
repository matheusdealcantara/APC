#include <stdio.h>
#include <time.h>
int qtdElementosUnicos(int v[], int qtd){
    int c=1;
    for(int i=0; i<qtd-1; i++){
        if(v[i]!=v[i+1]){
            c++;
        }
    }
    return c;
}

// int main(int argc, char const *argv[])
// {
//     int v[10000], qtd;
//     scanf("%d", &qtd);
//     for(int i=0; i<qtd; i++)
//     scanf("%d", &v[i]);
//     clock_t start, end;
//     double execution_time;
//     start = clock();
//     printf("%d\n", qtdElementosUnicos(v, qtd));
//     end = clock();
//     execution_time = ((double)(end - start))/CLOCKS_PER_SEC;
//     printf("Time taken to execute program: %f\n", execution_time);
//     return 0;
// }
