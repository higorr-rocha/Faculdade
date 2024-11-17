/*
    Disciplina  : [Linguagem e Técnicas de Programação]
    Nome        : Lista 07 - Ex 02
    Autor       : Higor Rocha
    Data atual  : 15/11/2024
*/

#include <locale.h>
#include <stdio.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    
    int mat_1[3][3] = {1,2,3,4,5,6,7,8,9};
    int mat_2[3][3] = {9,8,7,6,5,4,3,2,1};
    int mult_1[10][10], mult_2[10][10], mult_3[10][10];
    int x = 1;
    
    for (int i = 0; i < 3; i++)
    {
        for (int j =0; j < 3; j++)
        {
            printf("%d ", mat_1[i][j] + mat_2[i][j]);
        }
    }
    printf("\n");

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            printf("Insira o %dº valor da Matriz 1: ", x);
            scanf("%d", &mult_1[i][j]);
            printf("Insira o %dº valor da Matriz 2: ", x);
            scanf("%d", &mult_2[i][j]);
            mult_3[i][j] = mult_1[i][j] * mult_2[i][j];
            printf("Resultado: %d\n", mult_3[i][j]);
            x++;
        }
    }

    return 0;
}