/*
    Disciplina  : [Linguagem e Técnicas de Programação]
    Nome        : Lista 04 - Ex 08
    Autor       : Higor Rocha
    Data atual  : 26/10/2024
*/

#include <locale.h>
#include <stdio.h>
#include <string.h>

int main(){
    char string[40], vogal[] = {"AEIOUaeiou"};
    int tamanho, tamanho_v, v, atual = 0;
    setlocale(LC_ALL, "Portuguese");

    printf("Digite uma string: ");
    fgets(string, sizeof(string), stdin);
    string[strcspn(string, "\n")] = 0;

    tamanho = strlen(string);
    tamanho_v = strlen(vogal);

    for (int i = 0; i < tamanho; i++) 
    {
        v = 0;
        for (int j = 0; j < tamanho_v; j++) 
        {
            if (string[i] == vogal[j]) v = 1;
        }
        if (!v) string[atual++] = string[i];
    }
    string[atual] = '\0';

    printf("String sem vogais: %s\n", string);
    
    return 0;
}