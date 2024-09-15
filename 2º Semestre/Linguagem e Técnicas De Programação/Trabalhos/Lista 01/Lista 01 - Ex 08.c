/*
    Disciplina  : [Linguagem e Técnicas de Programação]
    Nome        : Aula 11 - Ex 08
    Autor       : Higor Rocha
    Data atual  : 10/09/2024
*/

#include <locale.h>
#include <stdio.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int km;
    float consumo, gas;
    printf("Quantos KMs a viagem durou? ");
    scanf("%d", &km);
    printf("Qual é o consumo do carro (KM/L)? ");
    scanf("%f", &consumo);
    printf("Qual o preço do litro do combustível? ");
    scanf("%f", &gas);
    printf("O custo da viagem é de: R$%.2f", (km / consumo) * gas);
    return 0;
}