/*
    Disciplina  : [Linguagem e Técnicas de Programação]
    Nome        : Exercício 11 - Revisão
    Descrição   : Crie uma função que receba dois números inteiros e retorne o maior valor.
    Autor       : Higor Rocha
    Data atual  : 06/09/2024
*/

#include <stdio.h>
#include <locale.h>

int maior(int num_1, int num_2);

int main(){
    int num_1, num_2;
    setlocale(LC_ALL, "Portuguese");
    printf("Digite o 1º número: ");
    scanf("%d", &num_1);
    printf("Digite o 2º número: ");
    scanf("%d", &num_2);
    printf("%d é o maior número.", maior(num_1, num_2));
}

int maior(int num_1, int num_2)
{
    if (num_1 > num_2) return num_1;
    else return num_2;
}