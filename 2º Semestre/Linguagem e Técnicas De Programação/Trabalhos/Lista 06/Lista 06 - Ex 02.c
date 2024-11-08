/*
    Disciplina  : [Linguagem e Técnicas de Programação]
    Nome        : Lista 06 - Ex 02
    Autor       : Higor Rocha
    Data atual  : 08/11/2024
*/

#include <locale.h>
#include <stdio.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    char txt[100];
    FILE *arquivo;
    arquivo = fopen("meuarquivo.txt", "r");

    while (!feof(arquivo))
    {
        fgets(txt, 100, arquivo);
    }

    printf("%s", txt);

    fclose(arquivo);

    return 0;
}
