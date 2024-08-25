/*
    Disciplina  : [Linguagem e Técnicas de Programação]
    Nome        : Programa em C  
    Descrição   : Recebe Nome e Idade. Na saída faz uma saudação e informa a idade.
    Autor       : Higor Rocha
    Data atual  : 06/08/2024
*/

#include <stdio.h>
#include <locale.h>

int main (){
    int idade;
    char nome;
    setlocale(LC_ALL, "Portuguese-Brazilian");
    printf("Digite seu Nome: ");
    scanf("%s", &nome);
    printf("Digite sua idade: ");
    scanf("%d", &idade);
    printf("Seu nome é %s, sua idade é %d anos.", nome,idade);
    return 0;
}