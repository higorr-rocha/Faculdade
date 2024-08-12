/*
    Disciplina  : [Linguagem e Técnicas de Programação]
    Nome        : Calculadora de Maior e Menor
    Descrição   : Recebe quatro números e informa qual o maior e qual o menor
    Autor       : Higor Rocha
    Data atual  : 09/08/2024
*/

#include <stdio.h>
#include <locale.h>

int main(){
    int maior, menor, num;
    setlocale(LC_ALL, "Portuguese-Brazilian");
    printf("Digite o Primeiro Número: ");
    scanf("%d", &num);
    maior = num;
    menor = num;
    printf("Digite o Segundo Número ");
    scanf("%d", &num);
    if(num > maior){
        maior = num;
    }
    if(num < menor){
        menor = num;
    }
    printf("Digite o Terceiro Número ");
    scanf("%d", &num);
    if(num > maior){
        maior = num;
    }
    if(num < menor){
        menor = num;
    }
    printf("Digite o Quarto Número ");
    scanf("%d", &num);
    if(num > maior){
        maior = num;
    }
    if(num < menor){
        menor = num;
    }
    printf("O maior número é: %d\nO menor número é: %d", maior, menor);
    return 0;
}