/*
    Disciplina  : [Linguagem e Técnicas de Programação]
    Nome        : Exercício 05 - Revisão
    Descrição   : Recebe um  o primeiro nome e o sobrenome de uma pessoa separadamente e 
                  depois exiba o nome completo.
    Autor       : Higor Rocha
    Data atual  : 06/09/2024
*/

#include <stdio.h>
#include <locale.h>

int main(){
    char nome[40], sobre[40];
    setlocale(LC_ALL, "Portuguese");
    printf("Digite seu nome: ");
    gets(nome);
    printf("Digite seu sobrenome: ");
    gets(sobre);
    printf("Olá, %s %s.", nome, sobre);
}