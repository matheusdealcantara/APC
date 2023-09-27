#include <stdio.h>
int faz_conta_direito(int parcelas, char op){
    int res, num;
    for(int i=0; i<parcelas; i++){
        scanf(" %d", &num);
        if(i==0){
            res=num;
        }
        if(op=='-' && i!=0){
            res-=num;
        } else if(op=='+' && i!=0){
            res+=num;
        }
    }
    return res;
}

// int main(int argc, char const *argv[])
// {
//     int n = faz_conta_direito(4, '+');
//     printf("%d\n", n);
//     return 0;
// }
