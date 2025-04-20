/*
    Disciplina  : [Linguagem e Técnicas de Programação]
    Nome        : Ex 45
    Autor       : Higor Rocha
    Data atual  : 20/04/2025
*/

#include <locale.h>
#include <stdlib.h>
#include <stdio.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    float *ptr;

    ptr = malloc(3 * sizeof(float));

    if (ptr != NULL)
    {
        for (int i = 0; i < 3; i++)
        {
            printf("Digite o %dº valor: ", i + 1);
            scanf("%f", &*(ptr + i));
        }
    }
    else
        printf("Erro ao alocar espaço!\n");

    free(ptr);

    return 0;
}