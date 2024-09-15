/*
    Disciplina  : [Linguagem e Técnicas de Programação]
    Nome        : Exercício 03 - Revisão
    Descrição   : Recebe dois números e exiba o maior deles.
    Autor       : Higor Rocha
    Data atual  : 06/09/2024
*/

#include <stdio.h>
#include <locale.h>

int main(){
    int num_1, num_2;
    setlocale(LC_ALL, "Portuguese");
    printf("Digite o 1º número: ");
    scanf("%d", &num_1);
    printf("Digite o 2º número: ");
    scanf("%d", &num_2);
    if (num_1 > num_2) printf("%d é o maior.", num_1);
    else printf("%d é o maior.", num_2);
}