/*
    Disciplina  : [Linguagem e Técnicas de Programação]
    Nome        : Exercício 01 - Revisão
    Descrição   : Recebe um número e diz se é Par ou Ímpar.
    Autor       : Higor Rocha
    Data atual  : 06/09/2024
*/

#include <stdio.h>
#include <locale.h>

int main(){
    int num;
    setlocale(LC_ALL, "Portuguese");
    printf("Digite um número: ");
    scanf("%d", &num);
    if (num % 2 == 0) printf("Esse número é Par.");
    else printf("Esse número é Ímpar.");
}