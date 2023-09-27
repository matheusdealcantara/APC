#include <string.h>
#include <stdio.h>
#include <ctype.h>
int main()
{
    int n;
    scanf("%d ", &n);
    for(int i=0; i<n; i++){
        char str[44];
        fgets(str, 44, stdin);
        int s=0;
        str[strlen(str)-1]=0;
        for(int c=0; c<strlen(str); c++){
            if(tolower(str[c])>tolower(str[c-1])){
                s++;  
            }
        }
        if (s==strlen(str))
        {
            printf("%s: O\n", str);
        } else {
            printf("%s: N\n", str);
        }
    }
    return 0;
}