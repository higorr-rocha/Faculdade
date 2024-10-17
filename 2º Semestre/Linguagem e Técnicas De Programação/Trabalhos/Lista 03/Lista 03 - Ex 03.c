/*
    Disciplina  : [Linguagem e Técnicas de Programação]
    Nome        : Lista 03 - Ex 03
    Autor       : Higor Rocha
    Data atual  : 17/10/2024
*/

#include <stdio.h>
#include <locale.h>

int main(){
    int i=1, num;
    float soma;
    setlocale(LC_ALL, "Portuguese");
    do
    {
        printf("Digite o %dº número: ", i);
        scanf("%d", &num);
        soma += num;
        i++;
    } while(i < 6);
    printf("A média dos 5 números é: %.2f", soma/5);
}