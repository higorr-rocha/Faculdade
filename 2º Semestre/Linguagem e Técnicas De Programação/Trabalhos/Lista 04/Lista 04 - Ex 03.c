/*
    Disciplina  : [Linguagem e Técnicas de Programação]
    Nome        : Lista 04 - Ex 03
    Autor       : Higor Rocha
    Data atual  : 26/10/2024
*/

#include <locale.h>
#include <stdio.h>
#include <string.h>

int main(){
    char string_1[40], string_2[40], prefix[80];
    int i = 0;
    setlocale(LC_ALL, "Portuguese");

    printf("Digite a 1ª string: ");
    fgets(string_1, sizeof(string_1), stdin);
    string_1[strcspn(string_1, "\n")] = 0;

    printf("Digite a 2ª string: ");
    fgets(string_2, sizeof(string_2), stdin);
    string_2[strcspn(string_2, "\n")] = 0;
    
    while (string_1[i] == string_2[i] && string_1[i] != '\0' && string_2[i] != '\0')
    {
        prefix[i] = string_1[i];
        i++;
    }
    prefix[i] = '\0';

    printf("O maior prefixo em comum é: %s.", prefix);

    return 0;
}