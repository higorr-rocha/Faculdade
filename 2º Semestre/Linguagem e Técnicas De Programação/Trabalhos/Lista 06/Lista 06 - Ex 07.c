/*
    Disciplina  : [Linguagem e Técnicas de Programação]
    Nome        : Lista 06 - Ex 07
    Autor       : Higor Rocha
    Data atual  : 08/11/2024
*/

#include <locale.h>
#include <stdio.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int num, quant = 0;
    float media = 0;
    FILE *arquivo;
    arquivo = fopen("numeros.txt", "r");

    while (fscanf(arquivo, "%d,", &num) != EOF) 
    {
        quant++;
        media += num;
    }

    printf("Resultado da soma: %.2f", media/quant);

    fclose(arquivo);

    return 0;
}
