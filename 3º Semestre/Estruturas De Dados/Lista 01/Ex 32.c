/*
    Disciplina  : [Linguagem e Técnicas de Programação]
    Nome        : Ex 32
    Autor       : Higor Rocha
    Data atual  : 19/04/2025
*/

#include <locale.h>
#include <stdlib.h>
#include <stdio.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int a, *b, **c, ***d;

    printf("Insira um número inteiro: ");
    scanf("%d", &a);

    b = &a;
    c = &b;
    d = &c;

    printf("O valor do quadrúplo de a é: %d\n", ***d * 4);

    return 0;
}