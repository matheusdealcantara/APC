#include <stdio.h>
#include <string.h>
int main()
{
    char r[62];
    fgets(r, 62, stdin);
    int i=strlen(r), s=0;
    r[i-1]=0;
    char re[62], ri[62];
    int x=0;
    for(int c=0; c<i; c++){
        if(r[c]=='a' || r[c]=='e' || r[c]=='i' || r[c]=='o' || r[c]=='u'){
            re[x] = r[c];
            x++;
        }
        re[x]=0;
    }
    x=0;
    for(int c=i-1; c>=0; c--){
        if(r[c]=='a' || r[c]=='e' || r[c]=='i' || r[c]=='o' || r[c]=='u'){
            ri[x] = r[c];
            x++;
        }
        ri[x]=0;
    }   
    if(strlen(re)==0){
        printf("Valor invalido!\n");
        return 0;
    }
    for(int c=0; c<strlen(re); c++){
        if(re[c]==ri[c]){
            s++;                
        }
    }
    if(s==strlen(re)){
        printf("S\n");
    } else {
        printf("N\n");
    }
    return 0;
}
