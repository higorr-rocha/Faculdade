/*
    Disciplina  : [Linguagem e Técnicas de Programação]
    Nome        : Lista 04 - Ex 01
    Autor       : Higor Rocha
    Data atual  : 26/10/2024
*/

#include <locale.h>
#include <stdio.h>
#include <string.h>

int main(){
    char string[40];
    int tamanho, i, j = 0;
    setlocale(LC_ALL, "Portuguese");

    printf("Digite uma string: ");
    fgets(string, sizeof(string), stdin);
    string[strcspn(string, "\n")] = 0;

    tamanho = strlen(string);

    for (i = 0; i < tamanho; i++)
    {
        if (string[i] != ' ')
        {
            string[j++] = string[i];
        }
    }
    string[j] = '\0';

    printf("String sem espaços em branco: %s", string);
    
    return 0;
}