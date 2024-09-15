/*
    Disciplina  : [Linguagem e Técnicas de Programação]
    Nome        : Aula 11 - Ex 09
    Autor       : Higor Rocha
    Data atual  : 10/09/2024
*/

#include <locale.h>
#include <stdio.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int num;
    printf("Digite um número: ");
    scanf("%d", &num);
    if (num == 2) printf("É um número primo.");
    else if (num % 1 == 0 && num % num == 0 && num % 2 != 0) printf("É um número primo.");
    else printf("Não é um número primo.");
    return 0;
}