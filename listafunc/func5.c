#include <stdio.h>
double calculaVelocidadeMedia(int tA, int tB, double distancia){
    double v = distancia/((tB/3600.00)-(tA/3600.00));
    return v;
}

int levouMulta(int tA, int tB, double distancia, double velocidadeMaxima){
    double velocidade = calculaVelocidadeMedia(tA, tB, distancia);
    if(velocidade<=velocidadeMaxima){
        return 0;
    }
    return 1;
}


// int main(int argc, char const *argv[])
// {
//     printf("%d\n", levouMulta(61200, 63000, 60.0, 120.0));
//     printf("%d\n", levouMulta(54169,57346,170.0,120.0));
//     return 0;
// }
