/*
    Disciplina  : [Linguagem e Técnicas de Programação]
    Nome        : Aula 08 - Exercício 01 - Prova Prática
    Descrição   : Recebe 5 números e entrega a média deles (Usando 2 variáveis).
    Autor       : Higor Rocha
    Data atual  : 24/08/2024
*/

#include <stdio.h>
#include <locale.h>

int main(){
    int num, soma;
    setlocale(LC_ALL, "Portuguese-Brazilian");
    printf("Digite o 1º Número: ");
    scanf("%d", &num);
    soma = num;
    printf("Digite o 2º Número: ");
    scanf("%d", &num);
    soma += num;
    printf("Digite o 3º Número: ");
    scanf("%d", &num);
    soma += num;
    printf("Digite o 4º Número: ");
    scanf("%d", &num);
    soma += num;
    printf("Digite o 5º Número: ");
    scanf("%d", &num);
    soma += num;
    printf("A média dos 5 números é: %d", soma/5);
    return 0;
}