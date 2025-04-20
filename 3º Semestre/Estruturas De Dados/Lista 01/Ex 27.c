/*
    Disciplina  : [Linguagem e Técnicas de Programação]
    Nome        : Ex 27
    Autor       : Higor Rocha
    Data atual  : 19/04/2025
*/

#include <locale.h>
#include <stdlib.h>
#include <stdio.h>

typedef struct{
    int idade;
    float altura;
}pessoa;

int main(){
    setlocale(LC_ALL, "Portuguese");
    pessoa p, *ptr_p = &p;    
    
    ptr_p -> idade = 20;
    ptr_p -> altura = 1.80;

    // OU //

    (*ptr_p).idade = 18;
    (*ptr_p).altura = 1.75;

    return 0;
}