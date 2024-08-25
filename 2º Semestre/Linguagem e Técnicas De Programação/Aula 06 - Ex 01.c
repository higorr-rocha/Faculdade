/*
    Disciplina  : [Linguagem e Técnicas de Programação]
    Nome        : Primeira função em C
    Descrição   : Recebe um número e diz se é Par ou Ímpar. Versão 2.0
    Autor       : Higor Rocha
    Data atual  : 20/08/2024
*/

#include <stdio.h>
#include <locale.h>

int par_impar(int num){
    return !(num % 2);
}

int main(){
    int valor;
    setlocale(LC_ALL, "Portuguese-Brazilian");
    printf("Digite um número: ");
    scanf("%d", &valor);
    if (par_impar (valor)) printf("Esse número é Par.");
    else printf("Esse número é Ímpar.");
    return 0;
}