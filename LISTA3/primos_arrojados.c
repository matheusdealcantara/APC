#include <stdio.h>
int main() {
    long int num, c;
    scanf("%ld", &c);
    for(int i=0; i<c; i++){
        int flag = 0;
        scanf("%ld", &num);
        for(int d=2;d*d<=num; ++d){
            if(num%d==0){
                flag=1;
                break;
            }
        }
        if(num==1 || flag==1){
            printf("N\n");
        } else {
            while (num>0){
                num/=10;
                for(int d=2;d*d<=num; ++d){
                    if(num%d==0){
                        flag=1;
                        break;
                    }
                }
                if(flag==1||num==1){
                    printf("N\n");
                    break;
                }   
            }
            if (flag==0){
            printf("S\n");
            }
        }
        
    }
    return 0;
}
