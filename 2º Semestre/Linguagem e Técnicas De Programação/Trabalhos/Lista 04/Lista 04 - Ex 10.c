/*
    Disciplina  : [Linguagem e Técnicas de Programação]
    Nome        : Lista 04 - Ex 10
    Autor       : Higor Rocha
    Data atual  : 26/10/2024
*/

#include <locale.h>
#include <stdio.h>
#include <string.h>

int main(){
    char string[40];
    int cont[256] = {};
    int tamanho;
    setlocale(LC_ALL, "Portuguese");

    printf("Digite uma string: ");
    fgets(string, sizeof(string), stdin);
    string[strcspn(string, "\n")] = 0;

    tamanho = strlen(string);

    for (int i = 0; i < tamanho; i++) 
    {
        cont[(unsigned char)string[i]]++;
    }

    for (int i = 0; i < 256; i++)
    {
        if (cont[i] > 0) printf("Ocorrências de %c: %d.\n", i, cont[i]);
    }
    
    return 0;
}