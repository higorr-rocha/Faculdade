/*
    Disciplina  : [Linguagem e Técnicas de Programação]
    Nome        : Lista 05 - Ex 10
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

    int vetor[quant];

    for (int i = 0; i < quant; i++)
    {
        printf("Insira o %dº número: ", i+1);
        scanf("%d", &vetor[i]);
    }

    for (int i = 0; i < quant - 1; i++)
    {
        for (int j = i + 1; j < quant; j++)
        {
            int temp;
            if (vetor[i] > vetor[j])
            {
                temp = vetor[j];
                vetor[j] = vetor[i];
                vetor[i] = temp;
            }
        }
    }

    printf("Maior: %d\n", vetor[quant-1]);
    printf("Menor: %d\n", vetor[0]);

    return 0;
}