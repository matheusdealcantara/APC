#include <stdio.h>
#include <string.h>
struct tipoMusica
{
    char nome[80];
    int ano;
};

struct tipoBanda
{
    char nome[80];
    int qtd;
    struct tipoMusica musicas[100];
};

void pesquisarNomeMusica(char pesquisa[80], struct tipoBanda bandas[50], int n){
    int c=0;
    for(int i=0; i<n; i++){
        for(int j=0;j<bandas[i].qtd; j++){
            if(strcmp(bandas[i].musicas[j].nome, pesquisa)==0){
                printf("%s : ano %d\n", bandas[i].nome, bandas[i].musicas[j].ano);
                c++;
            }
        }
    }
    if(c==0){
        printf("Musica nao cadastrada\n");
    }
}

// int main(int argc, char const *argv[])
// {
//     char pesquisa[80] = "Boate azul";
//     struct tipoMusica mus =
//     {
//         .nome="Boate azul",
//         .ano=2004
//     };
    
//     struct tipoBanda bandas[50];
//     bandas[0].musicas[0] = mus;
//     bandas[0].qtd = 1;
    
//     pesquisarNomeMusica(pesquisa, bandas, 1);
//     return 0;
// }
