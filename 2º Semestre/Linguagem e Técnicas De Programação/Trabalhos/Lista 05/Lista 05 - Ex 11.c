/*
    Disciplina  : [Linguagem e Técnicas de Programação]
    Nome        : Lista 05 - Ex 11
    Autor       : Higor Rocha
    Data atual  : 01/11/2024
*/

#include <locale.h>
#include <stdio.h>


int main(){
    int quant;
    setlocale(LC_ALL, "Portuguese");
    
    printf("Qual o tamanho desejado? ");
    scanf("%d", &quant);

    float vetor_1[quant], vetor_2[quant];

    for (int i = 0; i < quant; i++)
    {
        printf("Insira o %dº valor: ", i+1);
        scanf("%f", &vetor_1[i]);
    }

    for (int i = 0; i < quant; i++)
    {
        vetor_2[i] = vetor_1[quant - 1 - i];
    }
    
    for (int i = 0; i < quant; i++)
    {
        printf("%dº elemento: %.1f\n", i+1, vetor_2[i]);
    }

    return 0;
}