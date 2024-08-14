/*
    Disciplina  : [Linguagem e Técnicas de Programação]
    Nome        : Calculadora de Divisão
    Descrição   : Recebe dois números e informa o resultado da divisisão deles. 
    Autor       : Higor Rocha
    Data atual  : 13/08/2024
*/

#include <stdio.h>

int main(){
    int x,y;
    printf("Informe X: ");
    scanf("%d", &x);
    printf("Informe Y: ");
    scanf("%d", &y);
    if(y)printf("%d/%d=%.2f", x,y,(float)x/y);
    else printf("Y deve ser diferente de 0!");
    return 0;
}