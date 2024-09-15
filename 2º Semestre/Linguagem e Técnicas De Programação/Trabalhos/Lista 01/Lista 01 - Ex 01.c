/*
    Disciplina  : [Linguagem e Técnicas de Programação]
    Nome        : Aula 11 - Ex 01
    Autor       : Higor Rocha
    Data atual  : 10/09/2024
*/

#include <locale.h>
#include <stdio.h>

int main()
{
    int valor;
    setlocale(LC_ALL, "Portuguese");
    printf("Digite o valor da compra: ");
    scanf("%d", &valor);
    if (valor < 100) printf("O valor a ser pago é: %d", valor);
    else if (valor >= 100 && valor <= 500) printf("O valor a ser pago é: %.2f", valor - (valor * 0.10));
    else printf("O valor a ser pago é: %.2f", valor - (valor * 0.20));
    return 0;
}