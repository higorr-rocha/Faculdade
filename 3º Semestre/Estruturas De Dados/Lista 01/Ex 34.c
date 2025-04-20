/*
    Disciplina  : [Linguagem e Técnicas de Programação]
    Nome        : Ex 34
    Autor       : Higor Rocha
    Data atual  : 19/04/2025
*/

#include <locale.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void copia (char string_1[], char string_2[]){
    int i = 0;
    
    while (string_1[i] != '\0'){
        string_2[i] = string_1[i];
        i++;
    }
    
    string_2[i] = '\0';
}

int main(){
    setlocale(LC_ALL, "Portuguese");
    char string_1[50], string_2[50];

    printf("Insira uma frase: ");
    fgets(string_1, sizeof(string_1), stdin);
    string_1[strcspn(string_1, "\n")] = 0;

    copia(string_1, string_2);

    printf("A frase copiada é: %s\n", string_2);

    return 0;
}