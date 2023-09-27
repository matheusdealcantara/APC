#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){
    char str[102];
    fgets(str, 102, stdin);
    char pb[102];
    char sbinv[102];
    char sb[102];
    int i=strlen(str);
    str[i-1]=0;
    for(int c=0; c<i; c++){
        if(str[c]!=32){
            pb[c]=tolower(str[c]);
        } else {
            pb[c]=0;
            break;
        }
    }
    int x=0;
    for(int c=i-1; c>=0; c--){
        if(str[c]!=' '){
            sbinv[x]=str[c];
            x++;
        } else {
            sbinv[x]=0;
            break;
        }
    }  
    
    x=0;
    for(int c=strlen(sbinv)-1; c>=0; c--){
        sb[x] = sbinv[c];
        x++;
    }
    printf("%s.%s@unb.br\n", pb, sb);
    return 0;
}