double fact(int n){
    double fat=1;
    for(int c=1; c<=n; ++c){
        fat*=c;
    }
    return fat;
}

double pot(int x, int n){
    double pow=x;
    for(int c=0; c<n-1; c++){
        pow*=x;
    }
    return pow;
}

double exp_natural(int x, int n){
    double res=1;
    for(int i=1; i<=n; i++){
        res+=pot(x, i)/fact(i);
    }
    return res;
}


// #include <stdio.h>
// int main(int argc, char const *argv[])
// {
//     printf("%lf\n", exp_natural(2, 7));
//     printf("%lf\n", exp_natural(3, 4));
//     printf("%lf\n", fact(1));
//     printf("%lf\n", pot(2, 1));
//     return 0;
// }