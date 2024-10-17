/*
    Disciplina  : [Linguagem e Técnicas de Programação]
    Nome        : Lista 03 - Ex 02
    Autor       : Higor Rocha
    Data atual  : 17/10/2024
*/

#include <stdio.h>

int main(){
    int soma, i=0;
    while (i < 101)
    {
        soma += i;
        i++;
    }
    printf("%d", soma);
}