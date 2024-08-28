/*
    Disciplina  : [Linguagem e Técnicas de Programação]
    Nome        : Aula 08 - Exercício 03 - Prova Prática
    Descrição   : Recebe 6 números e diz qual o maior sem usar laço de repetiçao e função.
    Autor       : Higor Rocha
    Data atual  : 24/08/2024
*/

#include <stdio.h>
#include <locale.h>

int main(){
    int num, maior;
    setlocale(LC_ALL, "Portuguese-Brazilian");
    printf("Digite o 1º Número: ");
    scanf("%d", &num);
    maior = num;
    printf("Digite o 2º Número: ");
    scanf("%d", &num);
    if(num > maior) {maior = num;}
    printf("Digite o 3º Número: ");
    scanf("%d", &num);
    if(num > maior) {maior = num;}
    printf("Digite o 4º Número: ");
    scanf("%d", &num);
    if(num > maior) {maior = num;}
    printf("Digite o 5º Número: ");
    scanf("%d", &num);
    if(num > maior) {maior = num;}
    printf("Digite o 6º Número: ");
    scanf("%d", &num);
    if(num > maior) {maior = num;}
    printf("O maior número é %d.", maior);
    return 0;
}