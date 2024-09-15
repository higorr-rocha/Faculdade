/*
    Disciplina  : [Linguagem e Técnicas de Programação]
    Nome        : Exercício 12 - Revisão
    Descrição   : Desenvolva uma função que calcule e retorne o valor absoluto de um número.
    Autor       : Higor Rocha
    Data atual  : 06/09/2024
*/

#include <stdio.h>
#include <locale.h>

int absoluto(int num);

int main(){
    int num;
    setlocale(LC_ALL, "Portuguese");
    printf("Digite um número: ");
    scanf("%d", &num);
    printf("O valor absoluto de %d é: %d", num, absoluto(num));
}

int absoluto(int num)
{
    if (num < 0) return (num * -1);
    else return num;
}