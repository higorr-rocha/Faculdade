/*
    Disciplina  : [Linguagem e Técnicas de Programação]
    Nome        : Exercício 07 - Revisão
    Descrição   : Recebe três números e calcule a média aritmética deles.
    Autor       : Higor Rocha
    Data atual  : 06/09/2024
*/

#include <stdio.h>
#include <locale.h>

int main(){
    int num_1, num_2, num_3;
    setlocale(LC_ALL, "Portuguese");
    printf("Digite o 1º número: ");
    scanf("%d", &num_1);
    printf("Digite o 2º número: ");
    scanf("%d", &num_2);
    printf("Digite o 3º número: ");
    scanf("%d", &num_3);
    printf("A média dos números é: %d\n", (num_1 + num_2 + num_3)/3);
}