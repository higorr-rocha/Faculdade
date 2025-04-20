/*
    Disciplina  : [Linguagem e Técnicas de Programação]
    Nome        : Ex 47
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
    int *vet1, *vet2;

    vet1 = malloc(5 * sizeof(int));
    vet2 = calloc(5, sizeof(int));

    if (vet1 != NULL && vet2 != NULL)
    {
        for (int i = 0; i < 5; i++)
        {
            *(vet1 + i) = rand() % 100;
            *(vet2 + i) = rand() % 100;
        }

        for (int i = 0; i < 5; i++)
        {
            printf("Vetor 1 - Valor %d: %d\n", i + 1, *(vet1 + i));
            printf("Vetor 2 - Valor %d: %d\n", i + 1, *(vet2 + i));
            printf("\n");
        }
    }
    else
        printf("Erro ao alocar espaço!\n");

    free(vet1);
    free(vet2);

    return 0;
}