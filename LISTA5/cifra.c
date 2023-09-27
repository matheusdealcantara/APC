#include <stdio.h>
int main(void)
{
    int n;
    scanf("%d ", &n);
    for(int i=0; i<n; i++){
        char m[1002];
        int t=0;
        fgets(m, 1002, stdin);
        while(t<1002 && m[t]!='\0'){
            t++;
        }
        m[t-1]=0;
        for(int s=0; s<t; s++){
            if(m[s]>='A' && m[s]<='M'){
                m[s]+=13;
            } else if(m[s]>'M' && m[s]<='Z'){
                m[s]-=13;
            }
        }
        printf("%s\n", m);
    }
    return 0;
}
