/*
    Disciplina  : [Linguagem e Técnicas de Programação]
    Nome        : Aula 09 - Ex 03 - Revisão
    Descrição   : Recebe 3 números e diz qual o maior.
    Autor       : Higor Rocha
    Data atual  : 03/09/2024
*/

#include <stdio.h>
#include <locale.h>

int maior(int num_1, int num_2){
    if(num_1 > num_2){
        return num_1;
    }
    return num_2;
}

int main (){
    int num_1, num_2;
    setlocale(LC_ALL, "Portuguese");
    printf("Insira o primeiro número: ");
    scanf("%d", &num_1);
    printf("Insira o segundo número: ");
    scanf("%d", &num_2);
    num_2 = maior(num_1, num_2);
    printf("Insira o terceiro número: ");
    scanf("%d", &num_1);
    num_2 = maior(num_1, num_2);
    printf("O maior número é: %d", num_2);
}
