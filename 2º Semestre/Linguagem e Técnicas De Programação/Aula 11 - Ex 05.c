/*
    Disciplina  : [Linguagem e Técnicas de Programação]
    Nome        : Aula 10 - Ex 04
    Autor       : Higor Rocha
    Data atual  : 10/09/2024
*/

#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    setlocale(LC_ALL, "Portuguese");
    printf("Digite um número positivo: ");
    scanf("%d", &num);
    
}
