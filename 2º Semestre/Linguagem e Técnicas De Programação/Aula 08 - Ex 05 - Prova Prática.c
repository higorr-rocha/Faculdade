/*
    Disciplina  : [Linguagem e Técnicas de Programação]
    Nome        : Aula 08 - Exercício 03 - Prova Prática
    Descrição   : Recebe 5 números e escreve eles no formato descrescente.
    Autor       : Higor Rocha
    Data atual  : 24/08/2024
*/

#include <stdio.h>
#include <locale.h>

void ordena(int num[], int tamanho);

int main(){
    int num[5], i;
    setlocale(LC_ALL, "Portuguese");
    for (i = 0; i < 5; i++)
    {
        printf("Digite o %dº número: ", i+1);
        scanf("%d", &num[i]);
    }
    ordena(num, 5);
    for (i = 0; i < 5; i++)
    {
        printf("%d", num[i]);
        if(i < 4) printf(",");
        else printf(".");
    }
    return 0;
}

void ordena(int num[], int tamanho){
    int i, j;
    for (i = 0; i < tamanho-1; i++)
    {
        for (j = i + 1; j < tamanho; j++)
        {
            if (num[i] < num[j])
            {
                int temp = num[i];
                num[i] = num[j];
                num[j] = temp; 
            }
        }
    }
}