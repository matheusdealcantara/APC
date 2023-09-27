#include <stdio.h>
#include <string.h>
// int letra(char letra, char text[]){
//     int c=0, res=0;
//     int t=strlen(text);
//     text[t]=0;
//     for(int i=0; i<t && text[i]!=0; i++){
//         if(text[i]==letra){
//             c++;
//             // printf("%d %d\n", i, c);
//         }
//         if(c!=0 && (text[i]==32 || text[i+1]==0)){
//             c/=c;
//             res+=c;
//             c=0;
//         }
//     }
//     // printf("%d %d\n", res, c);
//     return res;
// }
int main(int argc, char const *argv[])
{
    double n=0, p=0, res=0;

    char c;
    scanf(" %c", &c);
    getchar();

    char text[1002]={};
    fgets(text, 1002, stdin);
    int t=strlen(text);
    text[t-1]=0;

    for(int i=0; i<t && text[i]!=0; i++){
        if(text[i]==32 || text[i+1]==0){
            n=0;
            p++;
        }
        if(text[i]==c && n==0){
            n++;
            res++;
        }
    }
    res=((res*100)/p);
    printf("%.1lf\n", res);
    return 0;
}
