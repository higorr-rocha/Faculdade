/*
    Disciplina  : [Linguagem e Técnicas de Programação]
    Nome        : Aula 11 - Ex 06
    Autor       : Higor Rocha
    Data atual  : 10/09/2024
*/

#include <locale.h>
#include <stdio.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int quant, quant_p;
    float preco, desconto, total = 0;
    printf("Qual a quantidade de produtos únicos? ");
    scanf("%d", &quant);
    for (int i = 0; i < quant; i++)
    {
        printf("Digite o preço do %dº produto? ", i+1);
        scanf("%f", &preco);
        printf("Quantos foram comprados? ");
        scanf("%d", &quant_p);
        printf("Qual o desconto do produto (em porcentagem)?\nDigite 0 para sem desconto.\n");
        scanf("%f", &desconto);
        preco = preco * quant_p;
        desconto = preco * desconto / 100;
        total += preco - desconto;
    }
    printf("O valor total da compra é de: R$%.2f", total);
    return 0;
}