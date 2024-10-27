/*
    Disciplina  : [Linguagem e Técnicas de Programação]
    Nome        : Lista 04 - Ex 09
    Autor       : Higor Rocha
    Data atual  : 26/10/2024
*/

#include <locale.h>
#include <stdio.h>
#include <string.h>

int main(){
    char string[80], string_1[40], string_2[40];
    int tamanho, j = 0, k = 0;
    setlocale(LC_ALL, "Portuguese");

    printf("Digite a 1ª string: ");
    fgets(string_1, sizeof(string_1), stdin);
    string_1[strcspn(string_1, "\n")] = 0;
    printf("Digite a 2ª string: ");
    fgets(string_2, sizeof(string_2), stdin);
    string_2[strcspn(string_2, "\n")] = 0;

    tamanho = strlen(string_1) + strlen(string_2);

    for (int i = 0; i < tamanho; i++) 
    {
        if (i % 2 == 0) string[i] = string_1[j++];
        else string[i] = string_2[k++];
    }
    string[tamanho + 1] = '\0';

    printf("String intercalada: %s\n", string);
    
    return 0;
}