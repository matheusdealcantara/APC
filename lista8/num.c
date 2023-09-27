#include <stdio.h>
struct tipoData
{
    int dia;
    int mes;
    int ano;
};

struct tipoPessoa
{
    char nome[80];
    struct tipoData dtNascimento;
};

struct tipoPessoa separaInfo(char nome[80], int dt_nascimento)
{
    struct tipoPessoa pessoa;
    for(int i=0; i<80 && nome[i]!=0; i++){
        pessoa.nome[i]=nome[i];
    }
    int ano = dt_nascimento/10000;
    pessoa.dtNascimento.ano=ano;
    
    int mes = dt_nascimento%10000;
    pessoa.dtNascimento.mes=(mes/100);

    int dia = mes%100;
    pessoa.dtNascimento.dia=dia;
    return pessoa;
};

int main(int argc, char const *argv[])
{
    struct tipoPessoa pessoa = separaInfo("Fernando", 20001201);
    printf("%d\n", pessoa.dtNascimento.ano);
    return 0;
}

