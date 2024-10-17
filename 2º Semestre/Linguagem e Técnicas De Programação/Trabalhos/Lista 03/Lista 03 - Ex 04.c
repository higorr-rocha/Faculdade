/*
    Disciplina  : [Linguagem e Técnicas de Programação]
    Nome        : Lista 03 - Ex 04
    Autor       : Higor Rocha
    Data atual  : 17/10/2024
*/

#include <stdio.h>

int main(){
    int num = 7;
    printf("Tabuada do 7: \n");
    for (int i = 1; i < 11; i++)
    {
        printf("%d X %d: %d\n", num, i, num * i);
    }
}