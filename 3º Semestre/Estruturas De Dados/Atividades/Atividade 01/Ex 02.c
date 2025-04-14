/*
    Disciplina  : [Estruturas De Dados]
    Nome        : Exercício 02
    Autor       : Higor Rocha
    Data atual  : 19/02/2025
*/

#include <stdio.h>
#include <locale.h>

int main (){
    setlocale(LC_ALL, "Portuguese");

    for (short int i = 0, j = 20; i < 10 || j > 10; i++, j--)
    {
        if (i < 9)
            printf("  ");
        else
            printf(" ");
        printf("%d", i+1);
        printf("|");
        printf("%d\n", j);
    }
    

    return 0;
}