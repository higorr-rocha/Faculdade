/*
    Disciplina  : [Linguagem e Técnicas de Programação]
    Nome        : Função Divisor
    Descrição   : Recebe um número e diz o divisor.
    Autor       : Higor Rocha
    Data atual  : 20/08/2024
*/

#include <stdio.h>
#include <locale.h>

int main(){
    int i, j, k, m;
    i =1, j = 2, k = 3, m = 4;
    printf("A = %d\n", i += j+k);
    printf("B = %d\n", j *= k = m + 5);
    printf("C = %d", i += j += k += 1 + 2);
    return 0;
}