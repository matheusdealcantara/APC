#include <stdio.h>
int main() {
    int cc, dv, count, digito, resto, soma = 0;
    scanf("%d", &cc);
    for (count = 2; count <= 7; count++) {
        digito = cc % 10;
        soma += digito * count;
        cc /= 10;
    }

    resto = soma % 11;
    dv = 11 - resto;
    printf("%d\n", dv);
    return 0;
}