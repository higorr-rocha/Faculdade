/*
    Disciplina  : [Linguagem e Técnicas de Programação]
    Nome        : Lista 04 - Ex 06
    Autor       : Higor Rocha
    Data atual  : 26/10/2024
*/

#include <locale.h>
#include <stdio.h>
#include <string.h>

int main(){
    char string[40], sub[40];
    int posi, tamanho;
    setlocale(LC_ALL, "Portuguese");

    printf("Digite a string: ");
    fgets(string, sizeof(string), stdin);
    string[strcspn(string, "\n")] = 0;
    printf("Qual a posição inicial? ");
    scanf("%d", &posi);
    printf("Qual o tamanho da subsstring? ");
    scanf("%d", &tamanho);

    strncpy(sub,string + posi, tamanho);
    sub[tamanho] = '\0';

    printf("Substring: %s.", sub);

    return 0;
}