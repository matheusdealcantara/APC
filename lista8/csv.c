#include <stdio.h>
struct tipoFiliacao{
    char nome[82];
    char nomeMae[82];
    char nomePai[82];
};
struct tipoFiliacao separaLinhaCSV(char linha[240]){
    struct tipoFiliacao csv;
    int c, x=0, y=0;
    for (c=0;c<80 && linha[c]!=44; c++)
    {
        csv.nome[c]=linha[c];
    }
    for (c+=1; c<160 && linha[c]!=44; c++)
    {
        csv.nomeMae[x]=linha[c];
        x++;
    }
    for (c+=1;c<240 && linha[c]!=0;c++)
    {
        csv.nomePai[y]=linha[c];
        y++;
    }
    return csv;
}
// int main()
// {
//     struct tipoFiliacao csv = separaLinhaCSV("aoskdoasdkokasodkaosdkoaksdokaosdkoaksodkaskdokoasdkoaksdoasdkooadskoasdkokasd,aoskdoasdkokasodkaosdkoaksdokaosdkoaksodkaskdokoasdkoaksdoasdkooadskoasdkokasd,aoskdoasdkokasodkaosdkoaksdokaosdkoaksodkaskdokoasdkoaksdoasdkooadskoasdkokasd");
//     printf("%s\n", csv.nomeMae);
//     return 0;
// }
