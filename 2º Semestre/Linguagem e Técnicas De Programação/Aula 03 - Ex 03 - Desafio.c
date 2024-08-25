/*
    Disciplina  : [Linguagem e T?cnicas de Programação]
    Nome        : Média em C
    Descrição   : Recebe três números e entrega a média deles.
    Autor       : Higor Rocha
    Data atual  : 06/08/2024
*/

#include <stdio.h>
#include <locale.h>

int main(){
    float numero_1, numero_2, numero_3;
    setlocale(LC_ALL, "Portuguese-Brazilian");
    printf("Digite o primeiro número: ");
    scanf("%f", &numero_1);
    printf("Digite o segundo número: ");
    scanf("%f", &numero_2);
    printf("Digite o terceiro número: ");
    scanf("%f", &numero_3);
    printf("A média é: %.2f", (numero_1+numero_2+numero_3)/3);
    return 0;
}