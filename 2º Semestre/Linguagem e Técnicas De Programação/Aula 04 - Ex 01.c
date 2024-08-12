/*
    Disciplina  : [Linguagem e Técnicas de Programação]
    Nome        : Calculadora de Par ou Ímpar
    Descrição   : Recebe um número e informa se é Par ou Ímpar
    Autor       : Higor Rocha
    Data atual  : 09/08/2024
*/

#include <stdio.h>
#include <locale.h>

int main(){
    int num;
    setlocale(LC_ALL, "Portuguese-Brazilian");
    printf("Digite um número: ");
    scanf("%d", &num);
    if(num % 2 == 0){   // Inicia uma função "se". Caso seja verdade, faça isso.
        printf("Esse número é Par.");
    }else{              // Caso não seja, faça isso.
        printf("Esse número é Ímpar.");
    }
    return 0;
}