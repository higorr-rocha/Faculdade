/*
    Disciplina  : [Linguagem e Técnicas de Programação]
    Nome        : Aula 11 - Ex 16
    Autor       : Higor Rocha
    Data atual  : 10/09/2024
*/

#include <locale.h>
#include <stdio.h>


int main()
{
    setlocale(LC_ALL, "Portuguese");
    int tamanho;
    float valor;
    printf("Qual o tamanho do grupo? ");
    scanf("%d", &tamanho);
    printf("Insira o valor base do pacote: ");
    scanf("%f", &valor);
    if (tamanho > 15) printf("O valor total é de: %.2f", valor -= valor * 0.15);
    else if (tamanho > 10) printf("O valor total é de: %.2f", valor -= valor * 0.10);
    else printf("O valor total é de: %.2f", valor);
    return 0;
}