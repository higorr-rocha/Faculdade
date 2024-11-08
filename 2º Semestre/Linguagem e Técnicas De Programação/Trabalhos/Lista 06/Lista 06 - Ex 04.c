/*
    Disciplina  : [Linguagem e Técnicas de Programação]
    Nome        : Lista 06 - Ex 04
    Autor       : Higor Rocha
    Data atual  : 08/11/2024
*/

#include <locale.h>
#include <stdio.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int num, soma = 0;
    FILE *arquivo;
    arquivo = fopen("numeros.txt", "w+");

    for (int i = 0; i < 10; i++)
    {
        fprintf(arquivo, "%d\n", i+1);
    }

    fseek(arquivo, 0, SEEK_SET);

    while (fscanf(arquivo, "%d", &num) != EOF) 
    {
        soma += num * 3;
    }

    printf("Resultado da soma: %d", soma);

    fclose(arquivo);

    return 0;
}
