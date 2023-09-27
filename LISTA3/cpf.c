#include <stdio.h>
int main() {
    unsigned long long int cpf;
    scanf("%llu", &cpf);

    int digitos[11];
    for(int i=10; i>0; i--){
        digitos[i] = cpf % 10;
        cpf /= 10;
    }

    int soma = 0;
    for(int i=0; i<9; i++){
        soma += digitos[i]*(10-i);
    }
    int resto = soma % 11;
    int digito1 =(resto<2) ? 0 : 11 - resto;

    soma = 0;
    for(int i=0; i<10; i++){
        soma += digitos[i]*(11-i);
    }
    resto = soma % 11;
    int digito2 = (resto<2) ? 0 : 11 - resto;

    if(digito2!=digitos[10] && digito1!=digitos[9]){
        printf("invalido\n");
    } else {
        printf("valido\n");
    }
    
    return 0;
}