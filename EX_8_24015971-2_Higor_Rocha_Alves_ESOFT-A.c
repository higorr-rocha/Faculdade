/*
    Disciplina  : [Linguagem e Técnicas de Programação]
    Nome        : Exercício 08 - Revisão
    Descrição   : Recebe um o raio de um círculo e calcule a área e a circunferência.
    Autor       : Higor Rocha
    Data atual  : 06/09/2024
*/

#include <stdio.h>
#include <locale.h>

int main(){
    int raio;
    setlocale(LC_ALL, "Portuguese");
    printf("Digite o raio do círculo: ");
    scanf("%d", &raio);
    printf("A área do círculo é: %.2f\n", (raio * raio) * 3.1416);
    printf("A circunferência do círculo é: %.2f\n", 2 * (3.1416 * raio));
}