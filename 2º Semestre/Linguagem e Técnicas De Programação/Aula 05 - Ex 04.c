/*
    Disciplina  : [Linguagem e Técnicas de Programação]
    Nome        : Calculadora de Triãngulo Retângulo
    Descrição   : Calculadora Simples.
    Autor       : Higor Rocha
    Data atual  : 13/08/2024
*/

#include <stdio.h>
#include <locale.h>

int main(){
    float num_1, num_2;
    char op;
    setlocale(LC_ALL, "Portuguese-Brazilian");
    printf("Escolha um operação matemática:\n+ = Soma\n- = Subttração\n* = Multiplicação\n/ = Divisão\n");
    scanf("%c", &op);
    printf("Digite um Número: ");
    scanf("%f", &num_1);
    printf("Digite outro número: ");
    scanf("%f", &num_2);
    switch (op)
    {
    case '+':
        printf("%.2f+%.2f=%.2f", num_1,num_2,num_1+num_2);
        break;
    case '-':
        printf("%.2f-%.2f=%.2f", num_1,num_2,num_1-num_2);
        break;
    case '*':
        printf("%.2f*%.2f=%.2f", num_1,num_2,num_1*num_2);
        break;
    case '/':
        printf("%.2f/%.2f=%.2f", num_1,num_2,num_1/num_2);
        break;
    }
}