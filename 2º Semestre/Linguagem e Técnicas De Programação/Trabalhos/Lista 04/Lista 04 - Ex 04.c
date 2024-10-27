/*
    Disciplina  : [Linguagem e Técnicas de Programação]
    Nome        : Lista 04 - Ex 04
    Autor       : Higor Rocha
    Data atual  : 26/10/2024
*/

#include <locale.h>
#include <stdio.h>
#include <string.h>

int main(){
    char string[40], string_s[40];
    int tamanho, atual = 0, duplicado = 0;
    setlocale(LC_ALL, "Portuguese");

    printf("Digite a string: ");
    fgets(string, sizeof(string), stdin);
    string[strcspn(string, "\n")] = 0;

    tamanho = strlen(string);
    
    for (int i = 0; i < tamanho; i++)
    {
        duplicado = 0;
        for (int j = 0; j < atual; j++)
        {
            if (string_s[j] == string[i]) duplicado = 1;
        }
        if (!duplicado) string_s[atual++] = string[i];
    }
    string_s[atual] = '\0';

    printf("String sem caracteres repetidos: %s.", string_s);

    return 0;
}