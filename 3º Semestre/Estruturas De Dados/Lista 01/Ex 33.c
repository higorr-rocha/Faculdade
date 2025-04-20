/*
    Disciplina  : [Linguagem e Técnicas de Programação]
    Nome        : Ex 33
    Autor       : Higor Rocha
    Data atual  : 19/04/2025
*/

#include <locale.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char * inverte (char string[]){
    int i, j;
    char temp;

    j = strlen(string) - 1;

    for (i = 0; i < j; i++, j--){
        temp = string[i];
        string[i] = string[j];
        string[j] = temp;
    }

    return string;
}

int main(){
    setlocale(LC_ALL, "Portuguese");
    char string[50];

    printf("Insira uma frase: ");
    fgets(string, sizeof(string), stdin);
    string[strcspn(string, "\n")] = 0;

    strcpy(string, inverte(string));

    printf("A frase invertida é: %s\n", string);

    return 0;
}