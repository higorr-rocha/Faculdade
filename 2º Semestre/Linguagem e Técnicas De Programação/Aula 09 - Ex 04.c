/*
    Disciplina  : [Linguagem e Técnicas de Programação]
    Nome        : Aula 09 - Ex 04
    Descrição   : Recebe nome e sobrenome separadamente e os entrega juntos.
    Autor       : Higor Rocha
    Data atual  : 03/09/2024
*/

#include <stdio.h>
#include <locale.h>

int main (){
    char nome[40], sobre[40];
    setlocale(LC_ALL, "Portuguese");
    printf("Qual seu nome? ");
    gets(nome);
    printf("Qual seu sobrenome? ");
    gets(sobre);
    printf("Olá, %s %s.", nome, sobre);
}