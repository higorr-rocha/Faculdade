/*
    Disciplina  : [Linguagem e Técnicas de Programação]
    Nome        : Ex 49
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

    ptr = malloc(10 * sizeof(int));

    if (ptr != NULL)
    {
        for (int i = 0; i < 10; i++)
        {
            *(ptr + i) = (rand() % 31) + 20;
        }

        ptr = realloc(ptr, 15 * sizeof(int));

        for (int i = 0; i < 15; i++)
        {
            printf(" Valor %d: %d\n", i + 1, *(ptr + i));
        }
        
    }
    else
        printf("Erro ao alocar espaço!\n");

    free(ptr);

    return 0;
}