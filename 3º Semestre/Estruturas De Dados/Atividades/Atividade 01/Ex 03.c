/*
    Disciplina  : [Estruturas De Dados]
    Nome        : Exercício 03
    Autor       : Higor Rocha
    Data atual  : 19/02/2025
*/

#include <stdio.h>
#include <locale.h>

int main (){
    setlocale(LC_ALL, "Portuguese");

    short int num;

    do
    {
        printf("Insira um número entre 5 e 20: ");
        scanf("%hd", &num);
    } while (num < 5 || num > 20);
    

    for (short int i = 0, j = num; i <= num || j >= 0; i++, j--)
    {
        if (i > 9)
            printf("  ");
        else
            printf("   ");
        printf("%d", i);
        printf(" | ");
        printf("%d\n", j);
    }
    

    return 0;
}