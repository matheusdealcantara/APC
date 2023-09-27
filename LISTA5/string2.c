#include <stdio.h>
int main() {
    char str[1000];
    int i=0;
    scanf("%s", str);
    while(i<1000 && str[i]!='\0'){
        i++;
    }
    char strinv[1000];
    for(int c=0; c<=i; c++){
        strinv[c] = str[i-c];
    }

    for(int n=0; n<=i; n++){
        printf("%c", strinv[n]);
    }
    printf("\n");
    return 0;
}