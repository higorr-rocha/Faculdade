/*
    Disciplina  : [Linguagem e Técnicas de Programação]
    Nome        : Ex 23
    Autor       : Higor Rocha
    Data atual  : 17/04/2025
*/

#include <locale.h>
#include <stdlib.h>
#include <stdio.h>

void mostra (int k[], int tam){
    for (int i=0; i<tam; i++){
        printf("%d ", k[i]);
        printf("\n");
    }
}

void altera (int k[], int tam){
    for (int i=0; i < tam; i++){
        k[i] *= 2;
    }
}

int main(){
    setlocale(LC_ALL, "Portuguese");
    int vet [] = {12,15,14,45};
    int tam = sizeof(vet)/sizeof(int);

    mostra(vet, tam);
    altera(vet, tam);
    printf("/////////////////\n");
    mostra(vet, tam);
    printf("\n\n");

    return 0;
}