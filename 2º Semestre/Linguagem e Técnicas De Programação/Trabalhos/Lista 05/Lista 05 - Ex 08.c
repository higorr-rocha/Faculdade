/*
    Disciplina  : [Linguagem e Técnicas de Programação]
    Nome        : Lista 05 - Ex 08
    Autor       : Higor Rocha
    Data atual  : 01/11/2024
*/

#include <locale.h>
#include <stdio.h>

int main(){
    int vetor[5];
    setlocale(LC_ALL, "Portuguese");
    
    printf("Insira 5 números inteiros: \n");
    for (int i = 0; i < 5; i++)
    {
        printf("Insira o %dº número: ", i+1);
        scanf("%d", &vetor[i]);
    }

    for (int i = 0; i < 4; i++)
    {
        for (int j = i + 1; j < 5; j++)
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

    printf("Vetor ordenado: \n");
    for (int i = 0; i < 5; i++)
    {
        printf("%dº número: %d\n", i+1, vetor[i]);
    }
    
    return 0;
}