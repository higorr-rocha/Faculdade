/*
    Disciplina  : [Linguagem e Técnicas de Programação]
    Nome        : Ex 54
    Autor       : Higor Rocha
    Data atual  : 20/04/2025
*/

#include <locale.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main(){
    srand(time(NULL));
    setlocale(LC_ALL, "Portuguese");
    int **ptr;

    ptr = malloc(5 * sizeof(int *));

    if (ptr == NULL)
    {
        printf("Erro na alocação!");
        return 1;
    }

    for (int i = 0; i < 5; i++)
    {
        *(ptr + i) = malloc(4 * sizeof(int));
    }

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            *(*(ptr + i) + j) = (rand() % 101) + 100; 
        }
    }

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("Valor [%d][%d]: %d\n", i + 1, j + 1, ptr[i][j]);
        }

        printf("\n");
    }

    for (int i = 0; i < 5; i++)
    {
        free(ptr[i]);
    }

    free(ptr);

    return 0;
}