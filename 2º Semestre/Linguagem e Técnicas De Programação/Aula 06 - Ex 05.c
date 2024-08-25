/*
    Disciplina  : [Linguagem e Técnicas de Programação]
    Nome        : Aula 06 - Exercício 05
    Descrição   : Recebe um número de três dígitos e diz se o dígito da centena é Par ou Ìmpar.
    Autor       : Higor Rocha
    Data atual  : 20/08/2024
*/

#include <stdio.h>
#include <locale.h>

int main(){
    int num;
    setlocale(LC_ALL, "Portuguese-Brazilian");
    printf("Digite um número de 3 dígitos: ");
    scanf("%d", &num);
    num = num/100;
    if (num%2==0) printf("Par");
    else printf("Impar");
    return 0;
}