#include <stdio.h>
int main(int argc, char const *argv[])
{   
    char res[3]={};
    int c=0, p=0, ans=0;;
    while (scanf("%s", res)!=EOF)  
    {
        if(res[0]=='s'){
            c++;
        }
        if(p+1==10){
            if(c>=2){
                ans++;
            }
            p=0;
            c=0;
        }
        p++;
    }
    printf("%d\n", ans);
    return 0;
}
