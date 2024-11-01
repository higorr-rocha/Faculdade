/*
    Disciplina  : [Linguagem e Técnicas de Programação]
    Nome        : Lista 05 - Ex 02
    Autor       : Higor Rocha
    Data atual  : 01/11/2024
*/

#include <locale.h>
#include <stdio.h>

int main(){
    int maior, menor, soma = 0, vetor[] = {1,2,3,4,5,6,7,8,9,10};
    setlocale(LC_ALL, "Portuguese");
    
    for (int i = 0; i < 10; i++)
    {
        soma += vetor[i];
    }
    printf("\nSoma: %d\n", soma);
    for (int i = 0; i < 10; i++)
    {
        if (i < 1) {maior = vetor[i]; menor = vetor[i];}
        else if (maior < vetor[i]) maior = vetor[i];
        else if (menor > vetor[i]) menor = vetor[i];
    }
    printf("Maior: %d\n", maior);
    printf("Menor: %d", menor);

    return 0;
}