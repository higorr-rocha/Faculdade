/*
    Disciplina  : [Linguagem e Técnicas de Programação]
    Nome        : Ex 46
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
    int *ptr;

    ptr = malloc(5 * sizeof(int));

    if (ptr != NULL)
    {
        for (int i = 0; i < 5; i++)
        {
            *(ptr + i) = rand() % 100;
        }

        for (int i = 0; i < 5; i++)
        {
            printf("Valor %d: %d\n", i + 1, *(ptr + i));
        }
    }
    else
        printf("Erro ao alocar espaço!\n");

    free(ptr);

    return 0;
}