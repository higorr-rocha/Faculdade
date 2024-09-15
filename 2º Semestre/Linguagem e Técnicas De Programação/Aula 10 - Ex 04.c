/*
    Disciplina  : [Linguagem e Técnicas de Programação]
    Nome        : Exercício 04 - Revisão
    Descrição   : Recebe um um valor em reais (R$) e exiba o valor equivalente em dólares (US$).
    Autor       : Higor Rocha
    Data atual  : 06/09/2024
*/

#include <stdio.h>
#include <locale.h>

int main(){
    float valor, cot;
    setlocale(LC_ALL, "Portuguese");
    printf("Digite o valor em R$: ");
    scanf("%f", &valor);
    printf("Insira a cotação atual: ");
    scanf("%f", &cot);
    valor = valor / cot;
    printf("O valor em US$ é: %.2f.", valor);
}