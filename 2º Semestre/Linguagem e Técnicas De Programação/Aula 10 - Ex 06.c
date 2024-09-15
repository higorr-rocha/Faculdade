/*
    Disciplina  : [Linguagem e Técnicas de Programação]
    Nome        : Exercício 06 - Revisão
    Descrição   : Recebe dois números e exiba a soma, subtração, multiplicação e divisão deles.
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
    printf("A soma dos números é: %d\n", num_1 + num_2);
    printf("A subtração dos números é: %d\n", num_1 - num_2);
    printf("A multiplicação dos números é: %d\n", num_1 * num_2);
    printf("A divisão dos números é: %d\n", num_1 / num_2);
}