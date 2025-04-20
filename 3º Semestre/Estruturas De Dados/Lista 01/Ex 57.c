/*
    Disciplina  : [Linguagem e Técnicas de Programação]
    Nome        : Ex 57
    Autor       : Higor Rocha
    Data atual  : 20/04/2025
*/

#include <locale.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    char ***ptr;

    ptr = malloc(3 * sizeof(char **));

    for (int i = 0; i < 3; i++)
    {
        ptr[i] = malloc(4 * sizeof(char *));

        for (int j = 0; j < 4; j++)
        {
            ptr[i][j] = malloc(11 * sizeof(char));
            printf("Insira o nome [%d][%d]: ", i + 1, j + 1);
            fgets(ptr[i][j], 10, stdin);
            ptr[i][j] [strcspn(ptr[i][j], "\n")] = 0;
            fflush(stdin);
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("Nome [%d][%d]: %s\n", i + 1, j + 1, *(*(ptr + i) + j));
        }

        printf("\n");
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            free(ptr[i][j]);
        }
        free(ptr[i]);
    }
    free(ptr);

    return 0;
}