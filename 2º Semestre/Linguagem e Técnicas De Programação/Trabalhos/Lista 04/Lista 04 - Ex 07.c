/*
    Disciplina  : [Linguagem e Técnicas de Programação]
    Nome        : Lista 04 - Ex 07
    Autor       : Higor Rocha
    Data atual  : 26/10/2024
*/

#include <ctype.h>
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int compara(const void *a, const void *b) {
    return (*(char *)a - *(char *)b);
}

int main(){
    char string_1[40], string_2[40];
    int tamanho = strlen(string_1);
    setlocale(LC_ALL, "Portuguese");

    printf("Digite a 1ª String: ");
    fgets(string_1,sizeof(string_1),stdin);
    string_1[strcspn(string_1, "\n")] = 0;

    printf("Digite a 2ª string: ");
    fgets(string_2, sizeof(string_2), stdin);
    string_2[strcspn(string_2, "\n")] = 0;

    
    for (int i = 0; i < tamanho; i++)
    {
        string_1[i] = tolower(string_1[i]);
        string_2[i] = tolower(string_2[i]);
    }

    qsort(string_1,strlen(string_1),sizeof(char),compara);
    qsort(string_2,strlen(string_2),sizeof(char),compara);

    if (strcmp(string_1, string_2) == 0) printf("São anagramas.");
    else printf("Não são anagramas.");

    return 0;
}