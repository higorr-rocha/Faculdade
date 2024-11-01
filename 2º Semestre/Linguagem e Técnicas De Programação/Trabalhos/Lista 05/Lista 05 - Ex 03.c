/*
    Disciplina  : [Linguagem e Técnicas de Programação]
    Nome        : Lista 05 - Ex 03
    Autor       : Higor Rocha
    Data atual  : 01/11/2024
*/

#include <locale.h>
#include <stdio.h>

int main(){
    int vetor[] = {1,2,3,4,5,6,7,8,9,10};
    float media = 0;
    setlocale(LC_ALL, "Portuguese");
    
    for (int i = 0; i < 10; i++)
    {
        media += vetor[i];
    }
    printf("Média: %.2f", media/5);

    return 0;
}