/*
    Disciplina  : [Linguagem e Técnicas de Programação]
    Nome        : Exercício 14 - Revisão
    Descrição   : Crie uma função que receba o valor de um raio e retorne a área de um círculo.
    Autor       : Higor Rocha
    Data atual  : 06/09/2024
*/

#include <stdio.h>
#include <locale.h>

void area(int raio);

int main(){
    int raio;
    setlocale(LC_ALL, "Portuguese");
    printf("Digite o raio do círculo: ");
    scanf("%d", &raio);
    area(raio);
}

void area(int raio)
{
    printf("A área do círculo é: %.2f\n", (raio * raio) * 3.1416);
}