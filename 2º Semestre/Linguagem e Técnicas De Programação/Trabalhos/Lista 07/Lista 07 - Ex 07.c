/*
    Disciplina  : [Linguagem e Técnicas de Programação]
    Nome        : Lista 07 - Ex 07
    Autor       : Higor Rocha
    Data atual  : 15/11/2024
*/

#include <locale.h>
#include <stdio.h>
#include <stdbool.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    
    int mat[4][3];
    int x = 1;
    
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Insira o %dº valor da Matriz: ", x);
            scanf("%d", &mat[i][j]);
            x++;
        }
    }

    for (int i = 0; i < 4; i++)
    {
        int soma = 0;
        printf("Linha: %d\n", i+1);
        for (int j = 0; j < 3; j++)
        {
            soma += mat[i][j];
        }
        printf("Soma: %d\n", soma);
    }

    return 0;
}