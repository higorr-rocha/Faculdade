/*
    Disciplina  : [Linguagem e Técnicas de Programação]
    Nome        : Exercício 09 - Revisão
    Descrição   : Recebe uma temperatura em graus Celsius para Fahrenheit.
    Autor       : Higor Rocha
    Data atual  : 06/09/2024
*/

#include <stdio.h>
#include <locale.h>

int main(){
    int celcius;
    setlocale(LC_ALL, "Portuguese");
    printf("Digite a temperatura em °C: ");
    scanf("%d", &celcius);
    printf("A temperatura em °F é: %.1f", (celcius * 1.8) + 32);
}