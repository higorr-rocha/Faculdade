/*
    Disciplina  : [Linguagem e Técnicas de Programação]
    Nome        : Lista 03 - Ex 01
    Autor       : Higor Rocha
    Data atual  : 17/10/2024
*/

#include <stdio.h>

int main(){
    printf("Números Pares: ");
    for (int i = 0; i < 21; i += 2)
    {
        if (i < 19)
        {
            printf("%d", i);
            printf(",");
        }
        else
        {
            printf("%d", i);
            printf(".");
        }
    }
}