/*
    Disciplina  : [Linguagem e Técnicas de Programação]
    Nome        : Lista 06 - Ex 10
    Autor       : Higor Rocha
    Data atual  : 08/11/2024
*/

#include <locale.h>
#include <stdio.h>
#include <string.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int num, cont = 0;
    int valor[100];
    FILE *arquivo_1, *arquivo_2;
    arquivo_1 = fopen("numeros.txt", "r");
    arquivo_2 = fopen("copia.txt", "w");

    while (fscanf(arquivo_1, "%d", &num) != EOF) 
    {
        valor[cont] = num;
        cont++;
    }

    for (int i = 0; i < cont; i++)
    {
        fprintf(arquivo_2, "%d\n", valor[i]);
    }

    fclose(arquivo_1);
    fclose(arquivo_2);

    return 0;
}