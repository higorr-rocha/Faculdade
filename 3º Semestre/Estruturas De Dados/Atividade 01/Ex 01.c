/*
    Disciplina  : [Estruturas De Dados]
    Nome        : Exercício 01
    Autor       : Higor Rocha
    Data atual  : 19/02/2025
*/

#include <stdio.h>
#include <locale.h>

int main (){
    setlocale(LC_ALL, "Portuguese");

    short int pessoas;
    float valor, total;

    do
    {
        printf("Insira o valor da doação: ");
        scanf("%f", &valor);
        total += valor;
        pessoas++;
    } while (pessoas <= 100 && total < 7500);
    
    printf("A média de valor das doações por pessoa é de: R$%.2f", total/pessoas);

    return 0;
}