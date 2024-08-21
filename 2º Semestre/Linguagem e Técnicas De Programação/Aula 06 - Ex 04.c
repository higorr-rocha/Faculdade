/*
    Disciplina  : [Linguagem e Técnicas de Programação]
    Nome        : Função Divisor
    Descrição   : Recebe um número e diz o divisor.
    Autor       : Higor Rocha
    Data atual  : 20/08/2024
*/

#include <stdio.h>
#include <locale.h>

int soma_digitos(int num){
    int soma = 0;
    soma += num/1000;
    num %= 1000;
    soma += num/100;
    num %= 100; 
    soma += num/10;
    soma += num % 10;
    printf("%d", soma);
    return soma;
}

int main(){
    int valor;
    setlocale(LC_ALL, "Portuguese-Brazilian");
    printf("Digite um número de 4 dígitos: ");
    scanf("%d", &valor);
    soma_digitos(valor);
    return 0;
}