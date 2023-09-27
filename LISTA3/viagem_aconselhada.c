#include <stdio.h>
int main() {
    int r, nota, rest, d=0;
    while(scanf("%d", &r)!=EOF) {
        int max_nota=-1, max_rest=-1;
        for(int i=0; i<r; i++) {    
            scanf("%d %d", &rest, &nota);
            if(max_nota==nota && max_rest>rest){
                max_rest=rest;
            } else if(max_nota<nota){
                max_nota=nota;
                max_rest=rest;
            }
        }
        d++;
        printf("Dia %d\n", d);
        printf("%d\n", max_rest);
        printf("\n");
    }
    
    return 0;
}