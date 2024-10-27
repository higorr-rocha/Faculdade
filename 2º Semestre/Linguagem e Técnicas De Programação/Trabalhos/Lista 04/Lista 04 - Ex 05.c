/*
    Disciplina  : [Linguagem e Técnicas de Programação]
    Nome        : Lista 04 - Ex 05
    Autor       : Higor Rocha
    Data atual  : 26/10/2024
*/

#include <ctype.h>
#include <locale.h>
#include <stdio.h>
#include <string.h>

int main(){
    char string[40];
    int tamanho, quant = 0, palavra = 0;
    setlocale(LC_ALL, "Portuguese");

    printf("Digite a string: ");
    fgets(string, sizeof(string), stdin);
    string[strcspn(string, "\n")] = 0;

    tamanho = strlen(string);

    for (int i = 0; i < tamanho; i++)
    {
        if(isalpha(string[i]))
        {
            if (!palavra)
            {
                quant++;
                palavra = 1;
            }
        }
        else palavra = 0;
    }

    printf("Número de palavras na frase: %d.", quant);

    return 0;
}