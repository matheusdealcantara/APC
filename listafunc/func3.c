#include <stdio.h>
int validaPeso(double pesoKg){
    if(pesoKg<0){
        return 0;
    }
    return 1;
}

void fazGrama(double pesoKg){
    double pesoG = pesoKg/1000;
    printf("%.4lf\n", pesoG);
}

void fazTonelada(double pesoKg){
    double pesoTon = pesoKg*1000;
    printf("%.4lf\n", pesoTon);
}

int main(int argc, char const *argv[])
{
    validaPeso(-1000);
    fazGrama(12);
    fazTonelada(901);
    return 0;
}

