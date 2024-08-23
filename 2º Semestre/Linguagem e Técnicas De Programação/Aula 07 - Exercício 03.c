/*
    Disciplina  : [Linguagem e Técnicas de Programação]
    Nome        : Aula 07 - Exercício 03
    Descrição   : Calculando equação de segundo grau.
    Autor       : Higor Rocha
    Data atual  : 23/08/2024
*/

#include <stdio.h>
#include <locale.h>

double soma(double num_1, double num_2);
double sub(double num_1, double num_2);
double mult(double num_1, double num_2);
double div(double num_1, double num_2);
double media(double num_1, double num_2);
double porce(double num_1, double num_2);

int main(){
    double num_1, num_2, a, b, c;
    char op;
    setlocale(LC_ALL, "Portuguese-Brazilian");
    printf("Escolha um operação matemática:\n+ = Soma\n- = Subttração\n* = Multiplicação\n/ = Divisão\nM = Média\nP = Porcentagem\n");
    scanf("%c", &op);
    if (op == 'S'){
        printf("Digite o valor de A: ");
        scanf("%lf", &a);
        printf("Digite o valor de B: ");
        scanf("%lf", &b);
        printf("Digite o valor de C: ");
        scanf("%lf", &c);
    }
    else {
        printf("Digite um Número: ");
        scanf("%lf", &num_1);
        printf("Digite outro número: ");
        scanf("%lf", &num_2);
    }
    switch (op)
    {
    case '+':
        printf("A soma é: %.2lf\n", soma(num_1, num_2));
        break;
    case '-':
        printf("A subtração é: %.2lf\n", sub(num_1, num_2));
        break;
    case '*':
        printf("A multiplicação é: %.2lf\n", mult(num_1, num_2));
        break;
    case '/':
        printf("A divisão é: %.2lf\n", div(num_1, num_2));
        break;
    case 'M':
        printf("A média é: %.2lf\n", media(num_1, num_2));
        break;
    case 'P':
        printf("A porcentagem é: %.2lf\n", porce(num_1, num_2));
        break;
    }
    return 0;
}

double soma(double num_1, double num_2){
    return num_1 + num_2;
}

double sub(double num_1, double num_2){
    return num_1 - num_2;
}

double mult(double num_1, double num_2){
    return num_1 * num_2;
}

double div(double num_1, double num_2){
    return num_1 / num_2;
}

double media(double num_1, double num_2){
    return div(soma(num_1, num_2), 2);
}

double porce(double num_1, double num_2){
    return mult(div(num_1, 100), num_2);
}