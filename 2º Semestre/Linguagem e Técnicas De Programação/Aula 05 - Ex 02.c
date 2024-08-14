/*
    Disciplina  : [Linguagem e Técnicas de Programação]
    Nome        : Calculadora de Divisão
    Descrição   : Recebe um número e informa se ele é divisível por 3 e 7.
    Autor       : Higor Rocha
    Data atual  : 13/08/2024
*/

#include <stdio.h>
#include <locale.h>

int main(){
    int num;
    setlocale(LC_ALL, "Portuguese-Brazilian");
    printf("Digite um número inteiro: ");
    scanf("%d", &num);
    if(num % 3 == 0 && num % 7 == 0){
        printf("Esse número é divisível por 3 e 7!");
    }else printf("Esse número não é divisível por 3 e 7!");
    return 0;
}