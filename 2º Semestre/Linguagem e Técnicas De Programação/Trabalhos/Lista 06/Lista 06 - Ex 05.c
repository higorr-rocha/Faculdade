/*
    Disciplina  : [Linguagem e Técnicas de Programação]
    Nome        : Lista 06 - Ex 05
    Autor       : Higor Rocha
    Data atual  : 08/11/2024
*/

#include <locale.h>
#include <stdio.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int num, soma = 0;
    FILE *arquivo;
    arquivo = fopen("numeros.txt", "r");

    while (fscanf(arquivo, "%d", &num) != EOF) 
    {
        soma += num;
    }

    printf("Resultado da soma: %d", soma);

    fclose(arquivo);

    return 0;
}
