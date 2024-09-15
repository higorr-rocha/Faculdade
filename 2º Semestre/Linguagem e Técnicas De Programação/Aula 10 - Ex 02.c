/*
    Disciplina  : [Linguagem e Técnicas de Programação]
    Nome        : Exercício 02 - Revisão
    Descrição   : Recebe um número e exiba sua parte inteira e sua parte decimal separadamente.
    Autor       : Higor Rocha
    Data atual  : 06/09/2024
*/

#include <stdio.h>
#include <locale.h>

int main(){
    int num;
    float numF;
    setlocale(LC_ALL, "Portuguese");
    printf("Digite um número: ");
    scanf("%f", &numF);
    num = numF;
    numF -= num;
    printf("Parte inteira: %d\n", num);
    printf("Parte decimal: %f\n", numF);
}