/*
    Disciplina  : [Linguagem e Técnicas de Programação]
    Nome        : Lista 05 - Ex 05
    Autor       : Higor Rocha
    Data atual  : 01/11/2024
*/

#include <locale.h>
#include <stdio.h>
#include <stdbool.h>

int main(){
    int soma=0, sub=0, vetor_1[] = {1,2,3,4,5,6,7,8,9,10}, vetor_2[] = {11,12,13,14,15,16,17,18,19,20}, vetor_3[10];
    bool igual = false;
    setlocale(LC_ALL, "Portuguese");
    
    for (int i = 0; i < 10; i++)
    {
        soma += vetor_1[i] + vetor_2[i];
    }
    
    for (int i = 0; i < 10; i++)
    {
        sub += vetor_1[i] - vetor_2[i];
    }

    for (int i = 0; i < 10; i++)
    {
        if (i == 9) vetor_3[i] = vetor_1[i] + vetor_2[i];
        else vetor_3[i] = vetor_1[i + 1] + vetor_2[i];
    }

    for (int i = 0; i < 10; i++)
    {
        if (vetor_1[i] == vetor_2[i]) igual = true;
        else igual = false;
    }
    
    printf("O resultado da soma é: %d\n", soma);
    printf("O resultado da subtração é: %d\n", sub);
    printf("Vetor 1:\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d\n", vetor_1[i]);
    }
    printf("Vetor 2:\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d\n", vetor_2[i]);
    }
    printf("Vetor 3:\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d\n", vetor_3[i]);
    }
    if(igual) printf("Os vetores são iguais.");
    else printf("Os vetores não são iguais");

    return 0;
}