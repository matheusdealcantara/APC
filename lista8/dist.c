#include <stdio.h>
#include <math.h>
struct tipoPonto{
        int x;
        int y;
};
double pot(int b, int exp){
    long long int num;
    for(int i=0; i<exp-1; i++){
        if(i==0)
        num=b*b;
        else
        num=num*b;
    }
    return num;
}
double distancia(struct tipoPonto pa, struct tipoPonto pb){
    double dx = pot((pb.x-pa.x), 2);
    double dy = pot((pb.y-pa.y), 2);
    double d = dx+dy;
    if(d>=0){
        d=sqrt(d);
    }
    return d;
}
// int main(){
//     struct tipoPonto p1 = {
//         .x=1,
//         .y=2
//     };
//     struct tipoPonto p2 = {
//         .x=5,
//         .y=5
//     };       
//     printf("%lf\n", distancia(p1, p2));
//     return 0;
// }