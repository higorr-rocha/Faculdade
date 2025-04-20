/*
    Disciplina  : [Linguagem e Técnicas de Programação]
    Nome        : Ex 56
    Autor       : Higor Rocha
    Data atual  : 20/04/2025
*/

#include <locale.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    char **ptr, nome[50];

    ptr = malloc(5 * sizeof(char*));

    if (ptr == NULL)
    {
        printf("Erro na alocação!");
        return 1;
    }

    for (int i = 0; i < 5; i++)
    {
        printf("Digite o %dº nome: ", i + 1);
        fgets(nome, 50, stdin);
        nome[strcspn(nome, "\n")] = 0;
        *(ptr + i) = malloc((strlen(nome) + 1) * sizeof(char));
        strcpy(ptr[i],nome);
    }

    printf("Endereço do vetor: %p\n", ptr);

    for (int i = 0; i < 5; i++)
    {
        printf("Nome %d: %s\nEndereço de memória: %p\n", i + 1, *(ptr + i), *(ptr + i));
    }

    for (int i = 0; i < 5; i++)
    {
        free(ptr[i]);
    }

    free(ptr);

    return 0;
}