/*
    Disciplina  : [Linguagem e Técnicas de Programação]
    Nome        : Aula 06 - Exercício 04
    Descrição   : Recebe um número de quatro dígitos e diz a soma de todos os dígitos.
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
    return soma;
}

int main(){
    int valor;
    setlocale(LC_ALL, "Portuguese-Brazilian");
    printf("Digite um número de 4 dígitos: ");
    scanf("%d", &valor);
    if(valor >= 1000 && valor <= 9999){ 
        printf("A soma dos 4 dígitos do número %d é: %d", valor, soma_digitos(valor));
    }
    else printf("O número deve ter 4 dígitos.");
    return 0;
}