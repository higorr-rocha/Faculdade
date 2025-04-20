/*
    Disciplina  : [Linguagem e Técnicas de Programação]
    Nome        : Ex 53
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
    int *ptr_1, *ptr_2;

    ptr_1 = malloc(10 * sizeof(int));

    if (ptr_1 != NULL)
    {
        for (int i = 0; i < 10; i++)
        {
            *(ptr_1 + i) = rand() % 101;
        }

        ptr_2 = realloc(ptr_1, 20 * sizeof(int));

        if (ptr_2 != NULL)
        {
            if (ptr_2 == ptr_1)
            {
                printf("Realloc não alterou o endereço de memória.\n");
            }
            else
            {
                printf("Realloc alterou o endereço de memória.\n");
            }
        }
        else
        {
            printf("Erro ao realocar espaço!\n");
        }
        
    }
    else
        printf("Erro ao alocar espaço!\n");

    free(ptr_1);
    free(ptr_2);

    return 0;
}