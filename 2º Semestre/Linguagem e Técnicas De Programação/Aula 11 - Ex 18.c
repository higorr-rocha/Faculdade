/*
    Disciplina  : [Linguagem e Técnicas de Programação]
    Nome        : Aula 11 - Ex 18
    Autor       : Higor Rocha
    Data atual  : 10/09/2024
*/

#include <locale.h>
#include <math.h>
#include <stdio.h>


int main()
{
    setlocale(LC_ALL, "Portuguese");
    int periodos, anos;
    float valor, juros, total;
    printf("Insira o valor do investimento: ");
    scanf("%f", &valor);
    printf("Insira a taxa de juros anual (Em porcentagem): ");
    scanf("%f", &juros);
    getchar();
    printf("Qual o número de períodos de capitalização por ano? ");
    scanf("%d", &periodos);
    printf("Quantos anos fazem desde o investimento? ");
    scanf("%d", &anos);
    juros = juros / 100;
    total = valor * pow(1 + juros / periodos, periodos * anos);
    printf("O valor total do investimento é: R$%.2f", total);
    return 0;
}