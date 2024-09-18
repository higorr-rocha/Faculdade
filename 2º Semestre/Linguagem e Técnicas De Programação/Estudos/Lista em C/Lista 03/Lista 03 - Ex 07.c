/*
    Disciplina  : [Linguagem e Técnicas de Programação]
    Nome        : Lista - Ex 07
    Descrição   : Solicita 15 números (entre 10 e 50) e apresenta a média.
    Autor       : Higor Rocha
    Data atual  : 20/08/2024
*/

#include <stdio.h>
#include <locale.h>

int main(){
    int num, i;
    float media;
    setlocale(LC_ALL, "Portuguese-Brazilian");
    for (i = 0; i < 15; i++)
    {
        printf("Digite um número entre 10 e 50: ");
        scanf("%d", &num);
        if(num > 9 && num < 51) {media += num;}
        else printf("O número deve estar entre 10 e 50!\n");
    }
    printf("A média dos 15 números é: %.2f.", media/15);
    return 0;
}