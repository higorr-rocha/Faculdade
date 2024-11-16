/*
    Disciplina  : [Linguagem e Técnicas de Programação]
    Nome        : Lista 07 - Ex 06
    Autor       : Higor Rocha
    Data atual  : 15/11/2024
*/

#include <locale.h>
#include <stdio.h>
#include <stdbool.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    
    int mat[4][4];
    int x, y, cont = 1, maior = 0;
    
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("Insira o %dº valor da Matriz: ", cont);
            scanf("%d", &mat[i][j]);
            cont++;
        }
    }

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (mat[i][j] > maior)
            {
                maior = mat[i][j];
                x = i+1;
                y = j+1;
            }
        }
    }

    printf("O maior valor é: %d\n", maior);
    printf("Linha: %d\nColuna: %d", x, y);

    return 0;
}