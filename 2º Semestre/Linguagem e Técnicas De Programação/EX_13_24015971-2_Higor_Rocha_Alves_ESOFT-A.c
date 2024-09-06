/*
    Disciplina  : [Linguagem e Técnicas de Programação]
    Nome        : Exercício 13 - Revisão
    Descrição   : Escreva uma função que receba um número e retorne 1 se ele for par e 0 se for ímpar.
    Autor       : Higor Rocha
    Data atual  : 06/09/2024
*/

#include <stdio.h>
#include <locale.h>

int par(int num);

int main(){
    int num;
    setlocale(LC_ALL, "Portuguese");
    printf("Digite um número: ");
    scanf("%d", &num);
    printf("%d", par(num));
}

int par(int num)
{
    if (num % 2 == 0) return 1;
    else return 0;
}