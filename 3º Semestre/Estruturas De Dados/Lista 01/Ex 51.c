/*
    Disciplina  : [Linguagem e Técnicas de Programação]
    Nome        : Ex 51
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

    ptr = malloc(7 * sizeof(int));

    if (ptr != NULL)
    {
        for (int i = 0; i < 7; i++)
        {
            *(ptr + i) = (rand() % 21) + 10;
        }

        ptr = realloc(ptr, 5 * sizeof(int));

        for (int i = 0; i < 5; i++)
        {
            printf(" Valor %d: %d\n Endereço de Memória: %p\n", i + 1, ptr[i], &ptr[i]);
        }
        
    }
    else
        printf("Erro ao alocar espaço!\n");

    free(ptr);

    return 0;
}