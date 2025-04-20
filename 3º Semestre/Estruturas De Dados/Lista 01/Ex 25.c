/*
    Disciplina  : [Linguagem e Técnicas de Programação]
    Nome        : Ex 25
    Autor       : Higor Rocha
    Data atual  : 17/04/2025
*/

#include <locale.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    char vet [4][10];
    
    for (int i = 0; i < 4; i++){
        printf("Insira a %dª palavra (Máximo de 10 caracteres): ", i + 1);
        fgets(vet[i], 10, stdin);
        vet[i][strcspn(vet[i], "\n")] = 0;
    }

    printf("O tamanho do vetor é: %zu bytes\n", sizeof(vet));

    for (int i = 0; i < 4; i++){
        printf("A %dª palavra possui: %lld caracteres\n", i + 1, strlen(vet[i]));
    }

    printf("O endereço de memória do vetor é: %p\n", &vet);

    for (int i = 0; i < 4; i++)
    {
        printf("O endereço de memória do elemento %d é: %p\n", i + 1, &vet[i]);
    }
    

    return 0;
}