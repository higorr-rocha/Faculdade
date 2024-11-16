/*
    Disciplina  : [Linguagem e Técnicas de Programação]
    Nome        : Lista 07 - Ex 03
    Autor       : Higor Rocha
    Data atual  : 15/11/2024
*/

#include <locale.h>
#include <stdio.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    
    int mat[4][4];
    int x = 1;
    
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("Insira o %dº valor da Matriz: ", x);
            scanf("%d", &mat[i][j]);
            x++;
        }
    }
    for (int i = 0; i < 4; i++)
    {
        printf("%d ", mat[i][i]);
    }

    return 0;
}