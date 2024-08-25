/*
    Disciplina  : [Linguagem e Técnicas de Programação]
    Nome        : Primeiro Programa em C  
    Descrição   : Escreve Olá, Mundo!
    Autor       : Higor Rocha
    Data atual  : 02/08/2024
*/

#include <stdio.h>
#include <locale.h>

// Função principal que devolve um inteiro
int main(){ // Início da Função.
    setlocale(LC_ALL, "Portuguese-Brazilian");
    printf("Olá, Mundo!");   // Escreve o valor definido na tela.
    return 0;               // Devolve o valor da função (int).
}   // Fim da Função.