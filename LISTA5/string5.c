#include <stdio.h>
int main()
{
    char str[102];
    int i=0, o=0;
    while(fgets(str, 102, stdin)) {
    while(i<102 && str[i]!='\0'){
        i++;
    }
    str[i-1]=0;
    for(int c=0; c<i; c++){
        if(str[c]=='o'){
            o++;
        }
    }
    }
    printf("%d\n", o);
    return 0;
}
